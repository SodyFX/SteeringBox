// Either replace current SHCustomProtocol.h file or add changes from this file to your current SHCustomProtocol.h file

#ifndef __SHCUSTOMPROTOCOL_H__
#define __SHCUSTOMPROTOCOL_H__

#include <Arduino.h>
#include "TFTScreen.h"

// Custom Protocol Line - Add to SimHub under Arduino -> My Hardware -> Custom Protocol (unselect Javascript)
// isnull([DataCorePlugin.GameData.NewData.Gear], '-') + ',' + isnull([DataCorePlugin.GameData.NewData.Flag_Green],0) + ',' + isnull([DataCorePlugin.GameData.NewData.Flag_Yellow],0) + ',' + isnull([DataCorePlugin.GameData.NewData.Flag_White],0) + ',' + isnull([DataCorePlugin.GameData.NewData.Flag_Checkered],0)

class SHCustomProtocol {
private:

public:

	String gear = "N";
  String lastgear = "9";
  int gflag = 0;
  int gflagh = 0;
  int yflag = 0;
  int yflagh = 0;
  int wflag = 0;
  int wflagh = 0;
  int cflag = 0;
  int cflagh = 0;

  // Called when starting the arduino (setup method in main sketch)
  void setup() {
    InitDisplay();
    ClearDisplay();
    DisplayOn();
    fore = WHITE;    
    MoveTo(0,0);
    tftClearFlag()
  }

	// Called when new data is coming from computer
	void read() {
    gear = FlowSerialReadStringUntil(',');
    gflag = FlowSerialReadStringUntil(',').toInt();
    yflag = FlowSerialReadStringUntil(',').toInt();
    wflag = FlowSerialReadStringUntil(',').toInt();
    cflag = FlowSerialReadStringUntil('\n').toInt();

    if (gflag == 1) {
      tftDrawFlagGreen();
      gflagh = 1;
    } else if (gflagh == 1) {
      tftClearFlag();
      gflagh = 0;
    }

    if (yflag == 1) {
      tftDrawFlagYellow();
      yflagh = 1;
    } else if (yflagh == 1) {
      tftClearFlag();
      yflagh = 0;
    }

    if (wflag == 1) {
      tftDrawFlagWhite();
      wflagh = 1;
    } else if (wflagh == 1) {
      tftClearFlag();
      wflagh = 0;
    }

    if (cflag == 1) {
      tftDrawFlagCheck();
      cflagh = 1;
    } else if (cflagh == 1) {
      tftClearFlag();
      cflagh = 0;
    }

    if (gear != lastgear ) {
        MoveTo(64,4);
      if (gear == "N") {
        PlotChar('N');
      } else if (gear == "R") {
        PlotChar('R');
      } else {
        PlotInt(gear.toInt());
      }
      lastgear = gear;
    }
	}

	// Called once per arduino loop, timing can't be predicted, 
	// but it's called between each command sent to the arduino
	void loop() {
	}

	// Called once between each byte read on arduino,
	// THIS IS A CRITICAL PATH :
	// AVOID ANY TIME CONSUMING ROUTINES !!!
	// PREFER READ OR LOOP METHOS AS MUCH AS POSSIBLE
	// AVOID ANY INTERRUPTS DISABLE (serial data would be lost!!!)
	void idle() {
	}
};

#endif
