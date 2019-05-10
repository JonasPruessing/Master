#include <ros/ros.h>
#include <image_transport/image_transport.h>
#include <opencv2/highgui/highgui.hpp>
#include <cv_bridge/cv_bridge.h>
#include <string>


//for publish Images
#include <image_transport/image_transport.h>
#include <opencv2/highgui/highgui.hpp>
#include <cv_bridge/cv_bridge.h>
#include <cstdlib>


//lib for Ros pblish

#include "ros/ros.h"
// %EndTag(ROS_HEADER)%
// %Tag(MSG_HEADER)%
#include "std_msgs/String.h"
// %EndTag(MSG_HEADER)%

#include <sstream>

// for operaiting with String Pointers

#include <cstring>

#include<stdio.h>
#include<string.h>
#include <unistd.h>


#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>
#include <functional>
#include <fstream>


int main(int argc, char** argv)
{
  ros::init(argc, argv, "image_publisher");
  ros::NodeHandle nh;
  image_transport::ImageTransport it(nh);
  image_transport::Publisher pub = it.advertise("camera/rgb/image_raw", 1);

    int counterVar = 0;
    int ImageIndex = 0;
    int ImageIndexCallA = 0;
    int ImageIndexCallB = 0;
    int ImageRead = 0;
    int ImageCount = 0;

    using namespace std;




    std::vector<std::string>DataArray;

    std::string const HOME = std::getenv("HOME") ? std::getenv("HOME") : ".";




    if ( ImageRead == 0 )
    {
        std::ifstream file(HOME + "/Downloads/Bathroom/Names.txt");
        std::string str2;
        while (std::getline(file, str2))
        {
            DataArray.push_back(str2);
            std::cout << str2 << std::endl;
            ImageCount ++;
        }

    }

    ImageRead = 1;



    while (nh.ok()) {

        std::cout << "BLAAA" << std::endl;

    for (int i = 0; i < ImageCount; i++) {
        cv::Mat image = cv::imread(HOME + "/Downloads/Bathroom/" + DataArray[ImageIndex], CV_LOAD_IMAGE_COLOR);
        sensor_msgs::ImagePtr msg = cv_bridge::CvImage(std_msgs::Header(), "bgr8", image).toImageMsg();

        //ros::Rate loop_rate(5000);
        ros::Duration(3).sleep();
        //

        std::cout << "moep" << ImageIndex << std::endl;

        pub.publish(msg);
        ros::spinOnce();
        //loop_rate.sleep();


        ImageIndex ++;

    }


  }

}

