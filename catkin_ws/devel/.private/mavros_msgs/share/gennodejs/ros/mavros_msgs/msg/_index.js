
"use strict";

let Waypoint = require('./Waypoint.js');
let PlayTuneV2 = require('./PlayTuneV2.js');
let MountControl = require('./MountControl.js');
let WheelOdomStamped = require('./WheelOdomStamped.js');
let GlobalPositionTarget = require('./GlobalPositionTarget.js');
let AttitudeTarget = require('./AttitudeTarget.js');
let HilGPS = require('./HilGPS.js');
let CamIMUStamp = require('./CamIMUStamp.js');
let BatteryStatus = require('./BatteryStatus.js');
let Thrust = require('./Thrust.js');
let ESCTelemetry = require('./ESCTelemetry.js');
let CompanionProcessStatus = require('./CompanionProcessStatus.js');
let LogData = require('./LogData.js');
let GPSRAW = require('./GPSRAW.js');
let ManualControl = require('./ManualControl.js');
let NavControllerOutput = require('./NavControllerOutput.js');
let TerrainReport = require('./TerrainReport.js');
let RCIn = require('./RCIn.js');
let ESCStatus = require('./ESCStatus.js');
let ParamValue = require('./ParamValue.js');
let OnboardComputerStatus = require('./OnboardComputerStatus.js');
let OverrideRCIn = require('./OverrideRCIn.js');
let VFR_HUD = require('./VFR_HUD.js');
let ESCInfoItem = require('./ESCInfoItem.js');
let RCOut = require('./RCOut.js');
let HomePosition = require('./HomePosition.js');
let State = require('./State.js');
let FileEntry = require('./FileEntry.js');
let RTKBaseline = require('./RTKBaseline.js');
let Tunnel = require('./Tunnel.js');
let CameraImageCaptured = require('./CameraImageCaptured.js');
let ExtendedState = require('./ExtendedState.js');
let DebugValue = require('./DebugValue.js');
let Param = require('./Param.js');
let WaypointList = require('./WaypointList.js');
let LogEntry = require('./LogEntry.js');
let StatusText = require('./StatusText.js');
let EstimatorStatus = require('./EstimatorStatus.js');
let RTCM = require('./RTCM.js');
let GPSINPUT = require('./GPSINPUT.js');
let Altitude = require('./Altitude.js');
let MagnetometerReporter = require('./MagnetometerReporter.js');
let VehicleInfo = require('./VehicleInfo.js');
let Trajectory = require('./Trajectory.js');
let ADSBVehicle = require('./ADSBVehicle.js');
let HilActuatorControls = require('./HilActuatorControls.js');
let WaypointReached = require('./WaypointReached.js');
let HilControls = require('./HilControls.js');
let ESCInfo = require('./ESCInfo.js');
let HilSensor = require('./HilSensor.js');
let ESCStatusItem = require('./ESCStatusItem.js');
let HilStateQuaternion = require('./HilStateQuaternion.js');
let ActuatorControl = require('./ActuatorControl.js');
let Vibration = require('./Vibration.js');
let TimesyncStatus = require('./TimesyncStatus.js');
let CommandCode = require('./CommandCode.js');
let Mavlink = require('./Mavlink.js');
let PositionTarget = require('./PositionTarget.js');
let LandingTarget = require('./LandingTarget.js');
let RadioStatus = require('./RadioStatus.js');
let GPSRTK = require('./GPSRTK.js');
let OpticalFlowRad = require('./OpticalFlowRad.js');
let ESCTelemetryItem = require('./ESCTelemetryItem.js');

module.exports = {
  Waypoint: Waypoint,
  PlayTuneV2: PlayTuneV2,
  MountControl: MountControl,
  WheelOdomStamped: WheelOdomStamped,
  GlobalPositionTarget: GlobalPositionTarget,
  AttitudeTarget: AttitudeTarget,
  HilGPS: HilGPS,
  CamIMUStamp: CamIMUStamp,
  BatteryStatus: BatteryStatus,
  Thrust: Thrust,
  ESCTelemetry: ESCTelemetry,
  CompanionProcessStatus: CompanionProcessStatus,
  LogData: LogData,
  GPSRAW: GPSRAW,
  ManualControl: ManualControl,
  NavControllerOutput: NavControllerOutput,
  TerrainReport: TerrainReport,
  RCIn: RCIn,
  ESCStatus: ESCStatus,
  ParamValue: ParamValue,
  OnboardComputerStatus: OnboardComputerStatus,
  OverrideRCIn: OverrideRCIn,
  VFR_HUD: VFR_HUD,
  ESCInfoItem: ESCInfoItem,
  RCOut: RCOut,
  HomePosition: HomePosition,
  State: State,
  FileEntry: FileEntry,
  RTKBaseline: RTKBaseline,
  Tunnel: Tunnel,
  CameraImageCaptured: CameraImageCaptured,
  ExtendedState: ExtendedState,
  DebugValue: DebugValue,
  Param: Param,
  WaypointList: WaypointList,
  LogEntry: LogEntry,
  StatusText: StatusText,
  EstimatorStatus: EstimatorStatus,
  RTCM: RTCM,
  GPSINPUT: GPSINPUT,
  Altitude: Altitude,
  MagnetometerReporter: MagnetometerReporter,
  VehicleInfo: VehicleInfo,
  Trajectory: Trajectory,
  ADSBVehicle: ADSBVehicle,
  HilActuatorControls: HilActuatorControls,
  WaypointReached: WaypointReached,
  HilControls: HilControls,
  ESCInfo: ESCInfo,
  HilSensor: HilSensor,
  ESCStatusItem: ESCStatusItem,
  HilStateQuaternion: HilStateQuaternion,
  ActuatorControl: ActuatorControl,
  Vibration: Vibration,
  TimesyncStatus: TimesyncStatus,
  CommandCode: CommandCode,
  Mavlink: Mavlink,
  PositionTarget: PositionTarget,
  LandingTarget: LandingTarget,
  RadioStatus: RadioStatus,
  GPSRTK: GPSRTK,
  OpticalFlowRad: OpticalFlowRad,
  ESCTelemetryItem: ESCTelemetryItem,
};
