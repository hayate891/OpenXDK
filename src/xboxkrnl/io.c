// ******************************************************************
// * 
// * proj : OpenXDK
// *
// * desc : Open Source XBox Development Kit
// *
// * file : io.c
// *
// * note : XBox Kernel *I/O Manager* Definitions
// *
// ******************************************************************
#define _XBOXKRNL_INTERNAL_
#include "xboxkrnl/xboxkrnl.h"

XBSYSAPI VOID *IoAllocateIrp = 0;
XBSYSAPI VOID *IoBuildAsynchronousFsdRequest = 0;
XBSYSAPI VOID *IoBuildDeviceIoControlRequest = 0;
XBSYSAPI VOID *IoBuildSynchronousFsdRequest = 0;
XBSYSAPI VOID *IoCheckShareAccess = 0;
XBSYSAPI VOID *IoCompletionObjectType = 0;
XBSYSAPI VOID *IoCreateDevice = 0;
XBSYSAPI VOID *IoCreateFile = 0;
XBSYSAPI VOID *IoCreateSymbolicLink = 0;
XBSYSAPI VOID *IoDeleteDevice = 0;
XBSYSAPI VOID *IoDeleteSymbolicLink = 0;
XBSYSAPI VOID *IoDeviceObjectType = 0;
XBSYSAPI VOID *IoFileObjectType = 0;
XBSYSAPI VOID *IoFreeIrp = 0;
XBSYSAPI VOID *IoInitializeIrp = 0;
XBSYSAPI VOID *IoInvalidDeviceRequest = 0;
XBSYSAPI VOID *IoQueryFileInformation = 0;
XBSYSAPI VOID *IoQueryVolumeInformation = 0;
XBSYSAPI VOID *IoQueueThreadIrp = 0;
XBSYSAPI VOID *IoRemoveShareAccess = 0;
XBSYSAPI VOID *IoSetIoCompletion = 0;
XBSYSAPI VOID *IoSetShareAccess = 0;
XBSYSAPI VOID *IoStartNextPacket = 0;
XBSYSAPI VOID *IoStartNextPacketByKey = 0;
XBSYSAPI VOID *IoStartPacket = 0;
XBSYSAPI VOID *IoSynchronousDeviceIoControlRequest = 0;
XBSYSAPI VOID *IoSynchronousFsdRequest = 0;
XBSYSAPI VOID *IofCallDriver = 0;
XBSYSAPI VOID *IofCompleteRequest = 0;
XBSYSAPI VOID *IoDismountVolume = 0;
XBSYSAPI VOID *IoDismountVolumeByName = 0;
XBSYSAPI VOID *IoMarkIrpMustComplete = 0;
