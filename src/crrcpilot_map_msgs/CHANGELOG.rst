^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
Changelog for package crrcpilot_map_msgs
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

1.1.0 (2024-05-10)
------------------
* chore: update `package.xml` and fix `CMakeLists.txt` (`#91 <https://github.com/youtalk/crrcpilot_msgs/issues/91>`_)
  update package.xml and fix cmakefiles
* feat(crrcpilot_map_msgs): support cylindrical AreaInfo (`#64 <https://github.com/youtalk/crrcpilot_msgs/issues/64>`_)
  * feat(crrcpilot_map_msgs): support cylindrical AreaInfo
  * update attribute
  ---------
* feat(crrcpilot_map_msgs): add selected map loading (`#57 <https://github.com/youtalk/crrcpilot_msgs/issues/57>`_)
  * feat(map_loader): add support for sequential_map_loading
  * feat(crrcpilot_map_msgs): add PointCloudMetaData.msg
  * docs(crrcpilot_map_msgs): add description of selected_map_loading
  * docs(crrcpilot_map_msgs): remove gif for selected_map_loading
  * docs(crrcpilot_map_msgs): fix typo
  * feat(crrcpilot_map_msgs): make member of msg plural
  * docs(crrcpilot_map_msgs): clarify the client needs to receive msg beforehand
  * docs(crrcpilot_map_msgs): clarify IDs included in msgs are used as query for service
  ---------
* feat(crrcpilot_map_msgs): add grid coordinates in PointCloudMapCellWithID.msg (`#52 <https://github.com/youtalk/crrcpilot_msgs/issues/52>`_)
  * feat(crrcpilot_map_msgs): add grid coordinates in PointCloudMapCellWithID.msg
  * style(pre-commit): autofix
  * debug
  ---------
  Co-authored-by: pre-commit-ci[bot] <66853113+pre-commit-ci[bot]@users.noreply.github.com>
* feat(map-messages): add LaneletMapBin.msg (`#30 <https://github.com/youtalk/crrcpilot_msgs/issues/30>`_)
* feat: add crrcpilot_map_msgs for dynamic map loading (`#39 <https://github.com/youtalk/crrcpilot_msgs/issues/39>`_)
  Co-authored-by: M. Fatih Cırıt <xmfcx@users.noreply.github.com>
  Co-authored-by: Kenji Miyake <31987104+kenji-miyake@users.noreply.github.com>
  Co-authored-by: Takagi, Isamu <43976882+isamu-takagi@users.noreply.github.com>
* Contributors: M. Fatih Cırıt, Shintaro Tomie, Yutaka Kondo, kminoda
