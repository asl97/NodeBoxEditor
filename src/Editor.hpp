#ifndef EDITOR_HPP_INCLUDED
#define EDITOR_HPP_INCLUDED

#include "common.hpp"
#include "EditorState.hpp"
#include "Project.hpp"

class Editor : public IEventReceiver
{
public:
	Editor();
	bool run(IrrlichtDevice *irr_device, Configuration *conf, bool editor_is_installed);
	virtual bool OnEvent(const SEvent &event);
private:
	void recreateCameras();
	void applyCameraOffsets(Viewport i);
	void LoadScene();
	void viewportTick(Viewport vp, rect<s32> rect, bool mousehit, bool middlehit);


	EditorState *state;
	irr::IrrlichtDevice *device;

	// Helper functions
	int currentWindow;
	ISceneNode *target;
	ISceneNode *pivot;
	ICameraSceneNode *camera[4];
	vector3df viewport_offset[4];
	Viewport viewport_drag;
	vector2di viewport_drag_last;
	IMeshSceneNode *plane;
	Viewport viewport_contextmenu;
	bool click_handled;
	bool middle_click_handled;
};

#endif
