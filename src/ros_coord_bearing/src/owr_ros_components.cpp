#include "ros_coord_bearing/owr_ros_components.hpp"
#include "ros_coord_bearing/ros_coord_bearing.hpp"

void OWR_ROS_Components::registerTypes(const char *uri) {
    qmlRegisterType<ROS_Coord_Bearing>("bluesat.owr", 1, 0, "ROSCoordBearing");
}
