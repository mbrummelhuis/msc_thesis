
"use strict";

let FileChecksum = require('./FileChecksum.js')
let WaypointPull = require('./WaypointPull.js')
let CommandTOL = require('./CommandTOL.js')
let SetMode = require('./SetMode.js')
let CommandTriggerInterval = require('./CommandTriggerInterval.js')
let ParamPull = require('./ParamPull.js')
let CommandHome = require('./CommandHome.js')
let FileList = require('./FileList.js')
let FileClose = require('./FileClose.js')
let CommandBool = require('./CommandBool.js')
let VehicleInfoGet = require('./VehicleInfoGet.js')
let FileTruncate = require('./FileTruncate.js')
let ParamGet = require('./ParamGet.js')
let CommandTriggerControl = require('./CommandTriggerControl.js')
let ParamPush = require('./ParamPush.js')
let LogRequestEnd = require('./LogRequestEnd.js')
let FileWrite = require('./FileWrite.js')
let CommandAck = require('./CommandAck.js')
let FileOpen = require('./FileOpen.js')
let WaypointClear = require('./WaypointClear.js')
let WaypointPush = require('./WaypointPush.js')
let MessageInterval = require('./MessageInterval.js')
let SetMavFrame = require('./SetMavFrame.js')
let CommandVtolTransition = require('./CommandVtolTransition.js')
let MountConfigure = require('./MountConfigure.js')
let FileMakeDir = require('./FileMakeDir.js')
let CommandInt = require('./CommandInt.js')
let ParamSet = require('./ParamSet.js')
let FileRename = require('./FileRename.js')
let FileRead = require('./FileRead.js')
let WaypointSetCurrent = require('./WaypointSetCurrent.js')
let FileRemoveDir = require('./FileRemoveDir.js')
let StreamRate = require('./StreamRate.js')
let LogRequestData = require('./LogRequestData.js')
let LogRequestList = require('./LogRequestList.js')
let CommandLong = require('./CommandLong.js')
let FileRemove = require('./FileRemove.js')

module.exports = {
  FileChecksum: FileChecksum,
  WaypointPull: WaypointPull,
  CommandTOL: CommandTOL,
  SetMode: SetMode,
  CommandTriggerInterval: CommandTriggerInterval,
  ParamPull: ParamPull,
  CommandHome: CommandHome,
  FileList: FileList,
  FileClose: FileClose,
  CommandBool: CommandBool,
  VehicleInfoGet: VehicleInfoGet,
  FileTruncate: FileTruncate,
  ParamGet: ParamGet,
  CommandTriggerControl: CommandTriggerControl,
  ParamPush: ParamPush,
  LogRequestEnd: LogRequestEnd,
  FileWrite: FileWrite,
  CommandAck: CommandAck,
  FileOpen: FileOpen,
  WaypointClear: WaypointClear,
  WaypointPush: WaypointPush,
  MessageInterval: MessageInterval,
  SetMavFrame: SetMavFrame,
  CommandVtolTransition: CommandVtolTransition,
  MountConfigure: MountConfigure,
  FileMakeDir: FileMakeDir,
  CommandInt: CommandInt,
  ParamSet: ParamSet,
  FileRename: FileRename,
  FileRead: FileRead,
  WaypointSetCurrent: WaypointSetCurrent,
  FileRemoveDir: FileRemoveDir,
  StreamRate: StreamRate,
  LogRequestData: LogRequestData,
  LogRequestList: LogRequestList,
  CommandLong: CommandLong,
  FileRemove: FileRemove,
};
