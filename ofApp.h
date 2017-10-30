#pragma once

#include "ofMain.h"
#include "ofxOpenCv.h"
#include "ofxKinect.h"
#include "ofxBox2d.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
    
        ofxKinect kinect;
        
        ofxCvGrayscaleImage grayImage;         ofxCvGrayscaleImage grayThreshNear;        ofxCvGrayscaleImage grayThreshFar;
        ofxCvContourFinder contourFinder;
        int UmbralCerca;
        int UmbralLejos;
    
        vector <ofPolyline>                 lines;
        
        ofxBox2d                            box2d;
        vector <ofPtr<ofxBox2dCircle> >		circles;
        vector <ofPtr<ofxBox2dEdge> >       edges;
        
        
    
};
