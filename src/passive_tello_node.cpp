#include <ros/ros.h>

#include <std_msgs/Empty.h>
#include <geometry_msgs/Twist.h>

// Queues -------------------------------------------------------------------

#define SIZE_TAKE_OFF      20
#define SIZE_CMD_VEL       20

// Names --------------------------------------------------------------------

#define NODE_NAME         "tello"

// #define PARENT_FRAME      "odom"
// #define CHILD_FRAME       "robot"

class PassiveTello
{
    // ROS communications ---------------------------------------------------

    private:

    ros::NodeHandle handle;

    ros::Subscriber subTakeoff, subLand, subCmdVel;
    ros::Publisher pubTelloStatus;

    // Ctors ----------------------------------------------------------------

    public:

    PassiveTello()
    {
        this->subTakeoff = handle.subscribe<std_msgs::Empty>("/tello/takeoff", SIZE_TAKE_OFF,
                                                                 &PassiveTello::onTakeoff, this);
        this->subLand = handle.subscribe<std_msgs::Empty>("/tello/land", SIZE_TAKE_OFF,
                                                                 &PassiveTello::onLand, this);
        this->subCmdVel = handle.subscribe<geometry_msgs::Twist>("/tello/cmd_vel", SIZE_TAKE_OFF,
                                                                 &PassiveTello::onCmdVel, this);
    }

    private:

    // Event handlers -------------------------------------------------------

    void onLand(const std_msgs::Empty::ConstPtr& msg)
    {
        
    }

    void onTakeoff(const std_msgs::Empty::ConstPtr& msg)
    {
        
    }

    void onCmdVel(const geometry_msgs::Twist::ConstPtr& msg)
    {
        
    }
};

int main(int argc, char **argv)
{
    ros::init(argc, argv, NODE_NAME);
    PassiveTello node;
    ros::spin();
    return 0;
}