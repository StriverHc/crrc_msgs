// Copyright 2021 Crrc, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef CRRC_AUTO_MSGS_CONVERTER__CRRC_AUTO_MSGS_CONVERTER_HPP_
#define CRRC_AUTO_MSGS_CONVERTER__CRRC_AUTO_MSGS_CONVERTER_HPP_

#include "crrcpilot_perception_msgs/msg/tracked_objects.hpp"
#include "crrcpilot_planning_msgs/msg/path.hpp"
#include "crrcpilot_planning_msgs/msg/trajectory.hpp"
#include "crrcpilot_planning_msgs/msg/path.hpp"
#include "crrcpilot_planning_msgs/msg/trajectory.hpp"
#include "crrcpilot_system_msgs/msg/crrcpilot_state.hpp"
#include "crrcpilot_system_msgs/msg/hazard_status_stamped.hpp"
#include "crrcpilot_vehicle_msgs/msg/control_mode_report.hpp"
#include "crrcpilot_vehicle_msgs/msg/gear_command.hpp"
#include "crrcpilot_vehicle_msgs/msg/gear_report.hpp"
#include "crrcpilot_vehicle_msgs/msg/hazard_lights_command.hpp"
#include "crrcpilot_vehicle_msgs/msg/hazard_lights_report.hpp"
#include "crrcpilot_vehicle_msgs/msg/steering_report.hpp"
#include "crrcpilot_vehicle_msgs/msg/turn_indicators_command.hpp"
#include "crrcpilot_vehicle_msgs/msg/turn_indicators_report.hpp"
#include "crrc_external_api_msgs/msg/gear_shift_stamped.hpp"
#include "crrc_external_api_msgs/msg/turn_signal_stamped.hpp"
#include "crrc_perception_msgs/msg/dynamic_object_array.hpp"
#include "crrc_planning_msgs/msg/path.hpp"
#include "crrc_planning_msgs/msg/trajectory.hpp"
#include "crrc_system_msgs/msg/crrcpilot_state.hpp"
#include "crrc_system_msgs/msg/hazard_status_stamped.hpp"
#include "crrc_vehicle_msgs/msg/shift_stamped.hpp"
#include "crrc_vehicle_msgs/msg/steering.hpp"
#include "crrc_vehicle_msgs/msg/turn_signal.hpp"

namespace crrc_auto_msgs_converter
{
struct LightSignal
{
  crrcpilot_vehicle_msgs::msg::TurnIndicatorsCommand turn_signal;
  crrcpilot_vehicle_msgs::msg::HazardLightsCommand hazard_signal;
};

inline auto convert(const crrcpilot_system_msgs::msg::CrrcpilotState & state)
{
  crrc_system_msgs::msg::CrrcpilotState iv_state;
  switch (state.state) {
    case crrcpilot_system_msgs::msg::CrrcpilotState::INITIALIZING:
      iv_state.state = crrc_system_msgs::msg::CrrcpilotState::INITIALIZING_VEHICLE;
      break;
    case crrcpilot_system_msgs::msg::CrrcpilotState::WAITING_FOR_ROUTE:
      iv_state.state = crrc_system_msgs::msg::CrrcpilotState::WAITING_FOR_ROUTE;
      break;
    case crrcpilot_system_msgs::msg::CrrcpilotState::PLANNING:
      iv_state.state = crrc_system_msgs::msg::CrrcpilotState::PLANNING;
      break;
    case crrcpilot_system_msgs::msg::CrrcpilotState::WAITING_FOR_ENGAGE:
      iv_state.state = crrc_system_msgs::msg::CrrcpilotState::WAITING_FOR_ENGAGE;
      break;
    case crrcpilot_system_msgs::msg::CrrcpilotState::DRIVING:
      iv_state.state = crrc_system_msgs::msg::CrrcpilotState::DRIVING;
      break;
    case crrcpilot_system_msgs::msg::CrrcpilotState::ARRIVED_GOAL:
      iv_state.state = crrc_system_msgs::msg::CrrcpilotState::ARRIVAL_GOAL;
      break;
    case crrcpilot_system_msgs::msg::CrrcpilotState::FINALIZING:
      iv_state.state = crrc_system_msgs::msg::CrrcpilotState::FINALIZING;
      break;
  }
  return iv_state;
}

inline auto convert(const crrcpilot_system_msgs::msg::HazardStatusStamped & status)
{
  crrc_system_msgs::msg::HazardStatusStamped iv_status;
  iv_status.header.stamp = status.stamp;
  iv_status.status.level = status.status.level;
  iv_status.status.emergency = status.status.emergency;
  iv_status.status.emergency_holding = status.status.emergency_holding;
  iv_status.status.diagnostics_nf = status.status.diag_no_fault;
  iv_status.status.diagnostics_sf = status.status.diag_safe_fault;
  iv_status.status.diagnostics_lf = status.status.diag_latent_fault;
  iv_status.status.diagnostics_spf = status.status.diag_single_point_fault;
  return iv_status;
}

inline auto convert(const crrcpilot_planning_msgs::msg::Path & path)
{
  crrc_planning_msgs::msg::Path iv_path;
  iv_path.header = path.header;
  iv_path.points.reserve(path.points.size());
  for (const auto & point : path.points) {
    crrc_planning_msgs::msg::PathPoint iv_point;
    iv_point.pose = point.pose;
    iv_point.twist.linear.x = point.longitudinal_velocity_mps;
    iv_point.twist.linear.y = point.lateral_velocity_mps;
    iv_point.twist.angular.z = point.heading_rate_rps;
    iv_point.type = 0;  // not used
    iv_path.points.push_back(iv_point);
  }
  return iv_path;
}

inline auto convert(const crrcpilot_planning_msgs::msg::Trajectory & traj)
{
  crrc_planning_msgs::msg::Trajectory iv_traj;
  iv_traj.header = traj.header;
  iv_traj.points.reserve(traj.points.size());
  for (const auto & point : traj.points) {
    crrc_planning_msgs::msg::TrajectoryPoint iv_point;
    iv_point.pose = point.pose;
    iv_point.accel.linear.x = point.acceleration_mps2;
    iv_point.twist.linear.x = point.longitudinal_velocity_mps;
    iv_point.twist.linear.y = point.lateral_velocity_mps;
    iv_point.twist.angular.z = point.heading_rate_rps;
    iv_traj.points.push_back(iv_point);
  }
  return iv_traj;
}

inline auto convert(const crrcpilot_vehicle_msgs::msg::GearReport & gear)
{
  crrc_vehicle_msgs::msg::ShiftStamped iv_shift;
  iv_shift.header.stamp = gear.stamp;
  switch (gear.report) {
    case crrcpilot_vehicle_msgs::msg::GearReport::PARK:
      iv_shift.shift.data = crrc_vehicle_msgs::msg::Shift::PARKING;
      break;
    case crrcpilot_vehicle_msgs::msg::GearReport::REVERSE:
    case crrcpilot_vehicle_msgs::msg::GearReport::REVERSE_2:
      iv_shift.shift.data = crrc_vehicle_msgs::msg::Shift::REVERSE;
      break;
    case crrcpilot_vehicle_msgs::msg::GearReport::DRIVE:
    case crrcpilot_vehicle_msgs::msg::GearReport::DRIVE_2:
    case crrcpilot_vehicle_msgs::msg::GearReport::DRIVE_3:
    case crrcpilot_vehicle_msgs::msg::GearReport::DRIVE_4:
    case crrcpilot_vehicle_msgs::msg::GearReport::DRIVE_5:
    case crrcpilot_vehicle_msgs::msg::GearReport::DRIVE_6:
    case crrcpilot_vehicle_msgs::msg::GearReport::DRIVE_7:
    case crrcpilot_vehicle_msgs::msg::GearReport::DRIVE_8:
    case crrcpilot_vehicle_msgs::msg::GearReport::DRIVE_9:
    case crrcpilot_vehicle_msgs::msg::GearReport::DRIVE_10:
    case crrcpilot_vehicle_msgs::msg::GearReport::DRIVE_11:
    case crrcpilot_vehicle_msgs::msg::GearReport::DRIVE_12:
    case crrcpilot_vehicle_msgs::msg::GearReport::DRIVE_13:
    case crrcpilot_vehicle_msgs::msg::GearReport::DRIVE_14:
    case crrcpilot_vehicle_msgs::msg::GearReport::DRIVE_15:
    case crrcpilot_vehicle_msgs::msg::GearReport::DRIVE_16:
    case crrcpilot_vehicle_msgs::msg::GearReport::DRIVE_17:
    case crrcpilot_vehicle_msgs::msg::GearReport::DRIVE_18:
      iv_shift.shift.data = crrc_vehicle_msgs::msg::Shift::DRIVE;
      break;
    case crrcpilot_vehicle_msgs::msg::GearReport::LOW:
    case crrcpilot_vehicle_msgs::msg::GearReport::LOW_2:
      iv_shift.shift.data = crrc_vehicle_msgs::msg::Shift::LOW;
      break;
    default:
      iv_shift.shift.data = crrc_vehicle_msgs::msg::Shift::NONE;
      break;
  }
  return iv_shift;
}

inline auto convert(const crrc_external_api_msgs::msg::GearShiftStamped & shift)
{
  crrcpilot_vehicle_msgs::msg::GearCommand auto_gear;
  auto_gear.stamp = shift.stamp;
  switch (shift.gear_shift.data) {
    case crrc_external_api_msgs::msg::GearShift::PARKING:
      auto_gear.command = crrcpilot_vehicle_msgs::msg::GearCommand::PARK;
      break;
    case crrc_external_api_msgs::msg::GearShift::REVERSE:
      auto_gear.command = crrcpilot_vehicle_msgs::msg::GearCommand::REVERSE;
      break;
    case crrc_external_api_msgs::msg::GearShift::DRIVE:
      auto_gear.command = crrcpilot_vehicle_msgs::msg::GearCommand::DRIVE;
      break;
    case crrc_external_api_msgs::msg::GearShift::LOW:
      auto_gear.command = crrcpilot_vehicle_msgs::msg::GearCommand::LOW;
      break;
    default:
      constexpr int default_val = 0;
      auto_gear.command = default_val;
      break;
  }
  return auto_gear;
}

inline auto convert(
  const crrcpilot_vehicle_msgs::msg::TurnIndicatorsReport & turn_indicators,
  const crrcpilot_vehicle_msgs::msg::HazardLightsReport & hazard_lights)
{
  crrc_vehicle_msgs::msg::TurnSignal iv_turn_signal;

  if (hazard_lights.report == crrcpilot_vehicle_msgs::msg::HazardLightsReport::ENABLE) {
    iv_turn_signal.header.stamp = hazard_lights.stamp;
    iv_turn_signal.data = crrc_vehicle_msgs::msg::TurnSignal::HAZARD;
    return iv_turn_signal;
  }

  iv_turn_signal.header.stamp = turn_indicators.stamp;
  switch (turn_indicators.report) {
    case crrcpilot_vehicle_msgs::msg::TurnIndicatorsReport::ENABLE_LEFT:
      iv_turn_signal.data = crrc_vehicle_msgs::msg::TurnSignal::LEFT;
      break;
    case crrcpilot_vehicle_msgs::msg::TurnIndicatorsReport::ENABLE_RIGHT:
      iv_turn_signal.data = crrc_vehicle_msgs::msg::TurnSignal::RIGHT;
      break;
    default:
      iv_turn_signal.data = crrc_vehicle_msgs::msg::TurnSignal::NONE;
      break;
  }
  return iv_turn_signal;
}

inline auto convert(const crrc_external_api_msgs::msg::TurnSignalStamped & in_signal)
{
  crrcpilot_vehicle_msgs::msg::HazardLightsCommand hazard;
  hazard.stamp = in_signal.stamp;
  crrcpilot_vehicle_msgs::msg::TurnIndicatorsCommand turn;
  turn.stamp = in_signal.stamp;

  switch (in_signal.turn_signal.data) {
    case crrc_vehicle_msgs::msg::TurnSignal::HAZARD:
      hazard.command = crrcpilot_vehicle_msgs::msg::HazardLightsCommand::ENABLE;
      turn.command = crrcpilot_vehicle_msgs::msg::TurnIndicatorsCommand::DISABLE;
      break;
    case crrc_vehicle_msgs::msg::TurnSignal::LEFT:
      hazard.command = crrcpilot_vehicle_msgs::msg::HazardLightsCommand::DISABLE;
      turn.command = crrcpilot_vehicle_msgs::msg::TurnIndicatorsCommand::ENABLE_LEFT;
      break;
    case crrc_vehicle_msgs::msg::TurnSignal::RIGHT:
      hazard.command = crrcpilot_vehicle_msgs::msg::HazardLightsCommand::DISABLE;
      turn.command = crrcpilot_vehicle_msgs::msg::TurnIndicatorsCommand::ENABLE_RIGHT;
      break;
    default:
      hazard.command = crrcpilot_vehicle_msgs::msg::HazardLightsCommand::DISABLE;
      turn.command = crrcpilot_vehicle_msgs::msg::TurnIndicatorsCommand::DISABLE;
  }

  LightSignal light_signal;
  light_signal.turn_signal = turn;
  light_signal.hazard_signal = hazard;
  return light_signal;
}

inline auto convert(const crrcpilot_vehicle_msgs::msg::SteeringReport & steering)
{
  crrc_vehicle_msgs::msg::Steering iv_steering;
  iv_steering.header.stamp = steering.stamp;
  iv_steering.data = steering.steering_tire_angle;
  return iv_steering;
}

inline auto convert(const crrcpilot_perception_msgs::msg::ObjectClassification & classification)
{
  crrc_perception_msgs::msg::Semantic iv_semantic;
  iv_semantic.confidence = classification.probability;
  switch (classification.label) {
    case crrcpilot_perception_msgs::msg::ObjectClassification::UNKNOWN:
      iv_semantic.type = crrc_perception_msgs::msg::Semantic::UNKNOWN;
      break;
    case crrcpilot_perception_msgs::msg::ObjectClassification::CAR:
      iv_semantic.type = crrc_perception_msgs::msg::Semantic::CAR;
      break;
    case crrcpilot_perception_msgs::msg::ObjectClassification::TRUCK:
      iv_semantic.type = crrc_perception_msgs::msg::Semantic::TRUCK;
      break;
    case crrcpilot_perception_msgs::msg::ObjectClassification::BUS:
      iv_semantic.type = crrc_perception_msgs::msg::Semantic::BUS;
      break;
    case crrcpilot_perception_msgs::msg::ObjectClassification::TRAILER:
      iv_semantic.type = crrc_perception_msgs::msg::Semantic::TRUCK;
      break;
    case crrcpilot_perception_msgs::msg::ObjectClassification::MOTORCYCLE:
      iv_semantic.type = crrc_perception_msgs::msg::Semantic::MOTORBIKE;
      break;
    case crrcpilot_perception_msgs::msg::ObjectClassification::BICYCLE:
      iv_semantic.type = crrc_perception_msgs::msg::Semantic::BICYCLE;
      break;
    case crrcpilot_perception_msgs::msg::ObjectClassification::PEDESTRIAN:
      iv_semantic.type = crrc_perception_msgs::msg::Semantic::PEDESTRIAN;
      break;
    default:
      iv_semantic.type = crrc_perception_msgs::msg::Semantic::UNKNOWN;
      break;
  }
  return iv_semantic;
}

inline auto convert(const crrcpilot_perception_msgs::msg::TrackedObjectKinematics & kinematics)
{
  using Kinematics = crrcpilot_perception_msgs::msg::TrackedObjectKinematics;
  crrc_perception_msgs::msg::State iv_state;
  iv_state.pose_covariance = kinematics.pose_with_covariance;
  iv_state.orientation_reliable = (kinematics.orientation_availability == Kinematics::AVAILABLE);
  iv_state.twist_covariance = kinematics.twist_with_covariance;
  iv_state.twist_reliable = true;
  iv_state.acceleration_covariance = kinematics.acceleration_with_covariance;
  iv_state.acceleration_reliable = true;
  iv_state.predicted_paths = {};
  return iv_state;
}

inline auto convert(const crrcpilot_perception_msgs::msg::Shape & shape)
{
  crrc_perception_msgs::msg::Shape iv_shape;
  iv_shape.dimensions = shape.dimensions;
  iv_shape.footprint = shape.footprint;
  switch (shape.type) {
    case crrcpilot_perception_msgs::msg::Shape::BOUNDING_BOX:
      iv_shape.type = crrc_perception_msgs::msg::Shape::BOUNDING_BOX;
      break;
    case crrcpilot_perception_msgs::msg::Shape::CYLINDER:
      iv_shape.type = crrc_perception_msgs::msg::Shape::CYLINDER;
      break;
    case crrcpilot_perception_msgs::msg::Shape::POLYGON:
      iv_shape.type = crrc_perception_msgs::msg::Shape::POLYGON;
      break;
  }
  return iv_shape;
}

inline auto convert(const crrcpilot_perception_msgs::msg::TrackedObject & object)
{
  crrc_perception_msgs::msg::DynamicObject iv_object;
  iv_object.id = object.object_id;
  iv_object.semantic = convert(object.classification.front());
  iv_object.state = convert(object.kinematics);
  iv_object.shape = convert(object.shape);
  return iv_object;
}

inline auto convert(const crrcpilot_perception_msgs::msg::TrackedObjects & objects)
{
  crrc_perception_msgs::msg::DynamicObjectArray iv_objects;
  iv_objects.header = objects.header;
  iv_objects.objects.reserve(objects.objects.size());
  for (const auto & object : objects.objects) {
    iv_objects.objects.push_back(convert(object));
  }
  return iv_objects;
}

}  // namespace crrc_auto_msgs_converter

#endif  // CRRC_AUTO_MSGS_CONVERTER__CRRC_AUTO_MSGS_CONVERTER_HPP_
