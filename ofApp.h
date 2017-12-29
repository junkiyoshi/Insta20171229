#pragma once

#include <Windows.h>
#include <NuiApi.h>
#include <opencv2/opencv.hpp>
#include "ofMain.h"

#ifdef _DEBUG
#pragma comment(lib,"opencv_calib3d330d.lib")
#pragma comment(lib,"opencv_core330d.lib")
#pragma comment(lib,"opencv_features2d330d.lib")
#pragma comment(lib,"opencv_flann330d.lib")
#pragma comment(lib,"opencv_highgui330d.lib")
#pragma comment(lib,"opencv_imgcodecs330d.lib")
#pragma comment(lib,"opencv_imgproc330d.lib")
#pragma comment(lib,"opencv_ml330d.lib")
#pragma comment(lib,"opencv_objdetect330d.lib")
#pragma comment(lib,"opencv_photo330d.lib")
#pragma comment(lib,"opencv_shape330d.lib")
#pragma comment(lib,"opencv_stitching330d.lib")
#pragma comment(lib,"opencv_superres330d.lib")
#pragma comment(lib,"opencv_video330d.lib")
#pragma comment(lib,"opencv_videoio330d.lib")
#pragma comment(lib,"opencv_videostab330d.lib")
#else
#pragma comment(lib,"opencv_calib3d330.lib")
#pragma comment(lib,"opencv_core330.lib")
#pragma comment(lib,"opencv_features2d330.lib")
#pragma comment(lib,"opencv_flann330.lib")
#pragma comment(lib,"opencv_highgui330.lib")
#pragma comment(lib,"opencv_imgcodecs330.lib")
#pragma comment(lib,"opencv_imgproc330.lib")
#pragma comment(lib,"opencv_ml330.lib")
#pragma comment(lib,"opencv_objdetect330.lib")
#pragma comment(lib,"opencv_photo330.lib")
#pragma comment(lib,"opencv_shape330.lib")
#pragma comment(lib,"opencv_stitching330.lib")
#pragma comment(lib,"opencv_superres330.lib")
#pragma comment(lib,"opencv_video330.lib")
#pragma comment(lib,"opencv_videoio330.lib")
#pragma comment(lib,"opencv_videostab330.lib")
#endif

class ofApp : public ofBaseApp {

public:
	void setup();
	void update();
	void draw();

	void keyPressed(int key);
	void keyReleased(int key) {}
	void mouseMoved(int x, int y) {}
	void mouseDragged(int x, int y, int button) {}
	void mousePressed(int x, int y, int button) {}
	void mouseReleased(int x, int y, int button) {}
	void mouseEntered(int x, int y) {}
	void mouseExited(int x, int y) {}
	void windowResized(int w, int h) {}
	void dragEvent(ofDragInfo dragInfo) {}
	void gotMessage(ofMessage msg) {}

	// Kinect
	INuiSensor* sensor;
	INuiCoordinateMapper* cordinate_mapper;
	HANDLE color_event;
	HANDLE color_handle;
	HANDLE depth_event;
	HANDLE depth_handle;
	HANDLE events[2];
	int width, height;

	// OpenCV
	cv::Mat frame;
	cv::Mat save_frame;
	cv::Mat depth;

	// openFrameworks
	ofImage frame_img;
	vector<ofVec3f> locations;
	vector<ofColor> colors;
};