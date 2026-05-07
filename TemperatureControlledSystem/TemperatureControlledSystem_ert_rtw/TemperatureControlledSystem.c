/*
 * File: TemperatureControlledSystem.c
 *
 * Code generated for Simulink model 'TemperatureControlledSystem'.
 *
 * Model version                  : 1.4
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Thu May  7 16:56:18 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR (32-bit)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "TemperatureControlledSystem.h"
#include "rtwtypes.h"

/* Named constants for Chart: '<S1>/TemperatureControlledSystem' */
#define TemperatureCon_IN_COOLERCONTROL ((uint8_T)1U)
#define TemperatureCon_IN_HEATERCONTROL ((uint8_T)2U)
#define TemperatureControlledSy_IN_IDLE ((uint8_T)3U)

/* Block states (default storage) */
DW_TemperatureControlledSyste_T TemperatureControlledSystem_DW;

/* External inputs (root inport signals with default storage) */
ExtU_TemperatureControlledSys_T TemperatureControlledSystem_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_TemperatureControlledSys_T TemperatureControlledSystem_Y;

/* Real-time model */
static RT_MODEL_TemperatureControlle_T TemperatureControlledSystem_M_;
RT_MODEL_TemperatureControlle_T *const TemperatureControlledSystem_M =
  &TemperatureControlledSystem_M_;

/* Model step function */
void TemperatureControlledSystem_step(void)
{
  /* Outputs for Atomic SubSystem: '<Root>/TemperatureControlledSystem' */
  /* Chart: '<S1>/TemperatureControlledSystem' incorporates:
   *  Inport: '<Root>/temperature'
   */
  switch (TemperatureControlledSystem_DW.is_c3_TemperatureControlledSyst) {
   case TemperatureCon_IN_COOLERCONTROL:
    /* Outport: '<Root>/coolerStatus' */
    TemperatureControlledSystem_Y.coolerStatus = 1.0;
    if ((int32_T)TemperatureControlledSystem_U.temperature <= 25) {
      TemperatureControlledSystem_DW.durationCounter_2 = 0U;
      TemperatureControlledSystem_DW.durationCounter_1 = 0U;
      TemperatureControlledSystem_DW.is_c3_TemperatureControlledSyst =
        TemperatureControlledSy_IN_IDLE;

      /* Outport: '<Root>/heaterStatus' */
      TemperatureControlledSystem_Y.heaterStatus = 0.0;

      /* Outport: '<Root>/coolerStatus' */
      TemperatureControlledSystem_Y.coolerStatus = 0.0;
    }
    break;

   case TemperatureCon_IN_HEATERCONTROL:
    /* Outport: '<Root>/heaterStatus' */
    TemperatureControlledSystem_Y.heaterStatus = 1.0;
    if ((int32_T)TemperatureControlledSystem_U.temperature >= 10) {
      TemperatureControlledSystem_DW.durationCounter_2 = 0U;
      TemperatureControlledSystem_DW.durationCounter_1 = 0U;
      TemperatureControlledSystem_DW.is_c3_TemperatureControlledSyst =
        TemperatureControlledSy_IN_IDLE;

      /* Outport: '<Root>/heaterStatus' */
      TemperatureControlledSystem_Y.heaterStatus = 0.0;

      /* Outport: '<Root>/coolerStatus' */
      TemperatureControlledSystem_Y.coolerStatus = 0.0;
    }
    break;

   default:
    /* Outport: '<Root>/heaterStatus' */
    /* case IN_IDLE: */
    TemperatureControlledSystem_Y.heaterStatus = 0.0;

    /* Outport: '<Root>/coolerStatus' */
    TemperatureControlledSystem_Y.coolerStatus = 0.0;
    if ((int32_T)TemperatureControlledSystem_U.temperature >= 10) {
      TemperatureControlledSystem_DW.durationCounter_1 = 0U;
    }

    if (TemperatureControlledSystem_DW.durationCounter_1 >= 5000U) {
      TemperatureControlledSystem_DW.is_c3_TemperatureControlledSyst =
        TemperatureCon_IN_HEATERCONTROL;

      /* Outport: '<Root>/heaterStatus' */
      TemperatureControlledSystem_Y.heaterStatus = 1.0;
    } else {
      if ((int32_T)TemperatureControlledSystem_U.temperature <= 25) {
        TemperatureControlledSystem_DW.durationCounter_2 = 0U;
      }

      if (TemperatureControlledSystem_DW.durationCounter_2 >= 5000U) {
        TemperatureControlledSystem_DW.is_c3_TemperatureControlledSyst =
          TemperatureCon_IN_COOLERCONTROL;

        /* Outport: '<Root>/coolerStatus' */
        TemperatureControlledSystem_Y.coolerStatus = 1.0;
      }
    }
    break;
  }

  if ((int32_T)TemperatureControlledSystem_U.temperature < 10) {
    TemperatureControlledSystem_DW.durationCounter_1++;
  } else {
    TemperatureControlledSystem_DW.durationCounter_1 = 0U;
  }

  if ((int32_T)TemperatureControlledSystem_U.temperature > 25) {
    TemperatureControlledSystem_DW.durationCounter_2++;
  } else {
    TemperatureControlledSystem_DW.durationCounter_2 = 0U;
  }

  /* End of Chart: '<S1>/TemperatureControlledSystem' */
  /* End of Outputs for SubSystem: '<Root>/TemperatureControlledSystem' */
}

/* Model initialize function */
void TemperatureControlledSystem_initialize(void)
{
  /* SystemInitialize for Atomic SubSystem: '<Root>/TemperatureControlledSystem' */
  /* Chart: '<S1>/TemperatureControlledSystem' */
  TemperatureControlledSystem_DW.is_c3_TemperatureControlledSyst =
    TemperatureControlledSy_IN_IDLE;

  /* End of SystemInitialize for SubSystem: '<Root>/TemperatureControlledSystem' */
}

/* Model terminate function */
void TemperatureControlledSystem_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
