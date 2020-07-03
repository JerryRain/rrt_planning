
#include <path_planning/obstacles.h>
#include <geometry_msgs/Point.h>
 
 
vector< vector<geometry_msgs::Point> > obstacles::getObstacleArray()
{
    vector<geometry_msgs::Point> obstaclePoint;
    geometry_msgs::Point point;
    /**
    //first point
    point.x = 10;
    point.y = 30;
    point.z = 0;
    obstaclePoint.push_back(point);
 
    //second point
    point.x = 30;
    point.y = 10;
    point.z = 0;
    obstaclePoint.push_back(point);
 
    //third point
    point.x = 70;
    point.y = 10;
    point.z = 0;
    obstaclePoint.push_back(point);
 
    //fourth point
    point.x = 90;
    point.y = 30;
    point.z = 0;
    obstaclePoint.push_back(point);
    
    //first point again to complete the box
    point.x = 90;
    point.y = 70;
    point.z = 0;
    obstaclePoint.push_back(point);
    
    //first point
    point.x = 70;
    point.y = 90;
    point.z = 0;
    obstaclePoint.push_back(point);

    //second point
    point.x = 30;
    point.y = 90;
    point.z = 0;
    obstaclePoint.push_back(point);
 
    //third point
    point.x = 10;
    point.y = 70;
    point.z = 0;
    obstaclePoint.push_back(point);
 
    //fourth point
    point.x = 10;
    point.y = 30;
    point.z = 0;
    obstaclePoint.push_back(point);
    **/
    /**
    //first point
    point.x = 20;
    point.y = 20;
    point.z = 0;
    obstaclePoint.push_back(point);

    //second point
    point.x = 20;
    point.y = 80;
    point.z = 0;
    obstaclePoint.push_back(point);
 
    //third point
    point.x = 80;
    point.y = 80;
    point.z = 0;
    obstaclePoint.push_back(point);
 
    //fourth point
    point.x = 80;
    point.y = 20;
    point.z = 0;
    obstaclePoint.push_back(point);

    //first point again to complete the box
    point.x = 20;
    point.y = 20;
    point.z = 0;
    obstaclePoint.push_back(point);
    **/

    //first point
    point.x = 50;
    point.y = 50;
    point.z = 0;

    obstaclePoint.push_back(point);

    //second point
    point.x = 50;
    point.y = 70;
    point.z = 0;

    obstaclePoint.push_back(point);

    //third point
    point.x = 80;
    point.y = 70;
    point.z = 0;

    obstaclePoint.push_back(point);

    //fourth point
    point.x = 80;
    point.y = 50;
    point.z = 0;
    obstaclePoint.push_back(point);

    //first point again to complete the box
    point.x = 50;
    point.y = 50;
    point.z = 0;
    obstaclePoint.push_back(point);

    obstacleArray.push_back(obstaclePoint);
 
    return obstacleArray;
 
}
