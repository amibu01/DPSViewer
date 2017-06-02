#pragma once
#include "OverlayRenderer.h"

class WindowControllerBase {
protected:
	OverlayRenderer::Control& mControl;
	int mLocked;

public:
	WindowControllerBase(OverlayRenderer::Control &mControl, FILE *f);
	~WindowControllerBase();

	void save(FILE *f);
	void lock();
	void toggleVisibility();
	int isLocked();
	virtual int callback(HWND hwnd, UINT msg, WPARAM wparam, LPARAM lparam) = 0;
	void setTransparency(int transparency);
};
