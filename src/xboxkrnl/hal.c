// ******************************************************************
// * 
// * proj : OpenXDK
// *
// * desc : Open Source XBox Development Kit
// *
// * file : xboxkrnl_hal.c
// *
// * note : XBox Kernel *Hardware Abstraction Layer* Definitions
// *
// ******************************************************************
#define _XBOXKRNL_INTERNAL_
#include "xboxkrnl/xboxkrnl.h"

NTSYSAPI VOID *HalReadSMCTrayState = 0;
NTSYSAPI VOID *HalClearSoftwareInterrupt = 0;
NTSYSAPI VOID *HalDisableSystemInterrupt = 0;
NTSYSAPI VOID *HalDiskCachePartitionCount = 0;
NTSYSAPI VOID *HalDiskModelNumber = 0;
NTSYSAPI VOID *HalDiskSerialNumber = 0;
NTSYSAPI VOID *HalEnableSystemInterrupt = 0;
NTSYSAPI VOID *HalGetInterruptVector = 0;
NTSYSAPI VOID *HalReadSMBusValue = 0;
NTSYSAPI VOID *HalReadWritePCISpace = 0;
NTSYSAPI VOID *HalRegisterShutdownNotification = 0;
NTSYSAPI VOID *HalRequestSoftwareInterrupt = 0;

// ******************************************************************
// * 0x0031 - HalReturnToFirmware
// ******************************************************************
// *
// * Reboots the xbox in various ways
// *
// ******************************************************************
NTSYSAPI DECLSPEC_NORETURN VOID HalReturnToFirmware
(
	RETURN_FIRMWARE Routine
)
{
}

NTSYSAPI VOID *HalWriteSMBusValue = 0;
NTSYSAPI VOID *HalBootSMCVideoMode = 0;
NTSYSAPI VOID *HalIsResetOrShutdownPending = 0;
NTSYSAPI VOID *HalInitiateShutdown = 0;
NTSYSAPI VOID *HalEnableSecureTrayEject = 0;
NTSYSAPI VOID *HalWriteSMCScratchRegister = 0;
NTSYSAPI VOID *READ_PORT_BUFFER_UCHAR = 0;
NTSYSAPI VOID *READ_PORT_BUFFER_USHORT = 0;
NTSYSAPI VOID *READ_PORT_BUFFER_ULONG = 0;
NTSYSAPI VOID *WRITE_PORT_BUFFER_UCHAR = 0;
NTSYSAPI VOID *WRITE_PORT_BUFFER_USHORT = 0;
NTSYSAPI VOID *WRITE_PORT_BUFFER_ULONG = 0;
