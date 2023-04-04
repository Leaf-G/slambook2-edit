add_definitions("-Wall -g")
add_executable(run_kitti_stereo ../src/utils.cpp run_kitti_stereo.cpp)
target_link_libraries(run_kitti_stereo myslam ${THIRD_PARTY_LIBS} ${TORCH_LIBRARIES} get_patches)