add_library(myslam SHARED
        frame.cpp
        mappoint.cpp
        map.cpp
        camera.cpp
        config.cpp
        feature.cpp
        frontend.cpp
        backend.cpp
        viewer.cpp
        visual_odometry.cpp
        dataset.cpp
        get_patches.cpp
        get_patches.cu)

target_link_libraries(myslam
        ${THIRD_PARTY_LIBS}
        fmt)
