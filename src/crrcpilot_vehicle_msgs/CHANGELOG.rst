^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
Changelog for package crrcpilot_vehicle_msgs
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

1.1.0 (2024-05-10)
------------------
* chore: update `package.xml` and fix `CMakeLists.txt` (`#91 <https://github.com/youtalk/crrcpilot_msgs/issues/91>`_)
  update package.xml and fix cmakefiles
* feat: update msg definitions (`#87 <https://github.com/youtalk/crrcpilot_msgs/issues/87>`_)
  * feat(crrcpilot_perception_msgs): Add DetectedObjects messages and TrackedObjects messages
  * feat!(crrcpilot_planning_msgs): remove PathWithLaneId msgs
  * feat!(crrcpilot_perception_msgs): rename traffic signals to traffic lights
  * remove control mode command msg
  * fix(crrcpilot_vehicle_msgs): remove ControlModeCommands.msg in CMakeLists.txt (`#90 <https://github.com/youtalk/crrcpilot_msgs/issues/90>`_)
  * feat(crrcpilot_vehicle_msgs)!: remove VehicleControlCommand, VehicleKinematicState, and VehicleOdometry messages (`#88 <https://github.com/youtalk/crrcpilot_msgs/issues/88>`_)
  feat!(crrcpilot_vehicle_msgs): remove VehicleControlCommand, VehicleKinematicState, and VehicleOdometry messages
  * Revert "feat!(crrcpilot_perception_msgs): rename traffic signals to traffic lights"
  This reverts commit 768bb854036fc94db4364168e68d48b21401c17b.
  * add TrafficLight msgs
  * add todo
  ---------
  Co-authored-by: Ryohsuke Mitsudome <ryohsuke.mitsudome@crrc.jp>
  Co-authored-by: Ryohsuke Mitsudome <43976834+mitsudome-r@users.noreply.github.com>
  Co-authored-by: Yutaka Kondo <yutaka.kondo@youtalk.jp>
* fix(crrcpilot_vehicle_msgs): add missed vehicle msgs (`#80 <https://github.com/youtalk/crrcpilot_msgs/issues/80>`_)
  * fix(crrcpilot_vehicle_msgs): add missed vehicle msgs
  * style(pre-commit): autofix
  ---------
  Co-authored-by: pre-commit-ci[bot] <66853113+pre-commit-ci[bot]@users.noreply.github.com>
* feat(crrcpilot_vehicle_msgs): add crrcpilot_vehicle_msgs (`#78 <https://github.com/youtalk/crrcpilot_msgs/issues/78>`_)
  * feat(crrcpilot_vehicle_msgs): add crrcpilot_vehicle_msgs
  * feat(crrcpilot_vehicle_msgs): add ControlModeCommand.srv
  * style(pre-commit): autofix
  * fix(crrcpilot_vehicle_msgs): remove msgs unused
  * style(pre-commit): autofix
  ---------
  Co-authored-by: pre-commit-ci[bot] <66853113+pre-commit-ci[bot]@users.noreply.github.com>
* Contributors: Yukihiro Saito, Yutaka Kondo, beginningfan
