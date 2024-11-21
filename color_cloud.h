#pragma once

#include <pcl_conversions/pcl_conversions.h>

namespace color_cloud {
    struct EIGEN_ALIGN16 PointNormal
    {
        PCL_ADD_POINT4D;
        float intensity;
        PCL_ADD_NORMAL4D;
        float curvature;
        PCL_ADD_RGB;
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW
    };   
}

POINT_CLOUD_REGISTER_POINT_STRUCT(color_cloud::PointNormal,
    (float, x, x)
    (float, y, y)
    (float, z, z)
    (float, intensity, intensity)
    (float, normal_x, normal_x)
    (float, normal_y, normal_y)
    (float, normal_z, normal_z)
    (float, curvature, curvature)
    (float, rgba, rgba)
)

typedef color_cloud::PointNormal PointType;