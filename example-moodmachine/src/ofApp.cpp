#include "ofMain.h"
#include "ofxMoodMachine.h"


class ofApp : public ofBaseApp
{
	ofxMoodMachine moodmachine;
	
public:
	
	void setup()
	{
		moodmachine.setSpeed(1.0);
	}
	
	void update()
	{
		ofBackground(moodmachine);
	}
	
	void draw()
	{
		ofDrawBitmapStringHighlight("[ spacebar ] to toggle the mood", 20, 30, moodmachine.getInverted());
	}
	
	void keyPressed(int key)
	{
		if (key == ' ')
			moodmachine.toggle();
	}
};


#pragma mark -
#pragma mark main
int main(){
	ofSetupOpenGL(300, 300, OF_WINDOW);
	ofRunApp(new ofApp());
}
