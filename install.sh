sudo apt install ros-melodic-openni-launch 
sudo sh -c 'echo "deb http://packages.ros.org/ros/ubuntu $(lsb_release -sc) main" > /etc/apt/sources.list.d/ros-latest.list'
sudo apt-key adv --keyserver hkp://ha.pool.sks-keyservers.net:80 --recv-key 421C365BD9FF1F717815A3895523BAEEB01FA116
sudo apt update
sudo apt install ros-melodic-desktop-full 
sudo rosdep init
rosdep update
echo "source /opt/ros/melodic/setup.bash" >> ~/.bashrc
source ~/.bashrc
sudo apt-get install python-rosinstall python-rosinstall-generator python-wstool build-essential
mkdir ~/Jonas_workspace
cd Jonas_workspace/
sudo apt-get install g++
sudo apt-get install libusb-1.0-0-dev
sudo apt-get install freeglut3-dev
sudo apt install ros-melodic-openni2-launch 
#roslaunch openni2_launch openni2.launch
#rosrun image_view disparity_view image:=/camera/depth/disparity
#rosrun image_view image_view image:=/camera/rgb/image_mono
#rosrun image_view disparity_view image:=/camera/depth_registered/disparity
#rosrun image_view disparity_view image:=/camera/depth/disparity
#roslaunch openni_launch openni.launch
#roslaunch openni2_launch openni2.launch
#roslaunch openni_launch openni.launch
#roslaunch openni2_launch openni2.launch
#rostopic echo /camera/rgb
#rostopic echo /camera/rgb/image_raw
#rosrun image_view image_view image:=/camera/rgb/image_color
#roscore
#rosrun rqt_reconfigure rqt_reconfigure
#rostopic list
#rosrun rviz rviz
