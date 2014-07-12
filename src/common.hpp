#ifndef COMMON_HPP_INCLUDED
#define COMMON_HPP_INCLUDED
#include <irrlicht.h>
#include <iostream>
using namespace irr;
using namespace core;
using namespace scene;
using namespace gui;
using namespace video;

// Enums
enum FileParserType
{
	EFPT_SAVE_PROJ = 1,
	EFPT_LOAD_PROJ = 2,
	EFPT_EXPORT = 3,
	EFPT_IMPORT = 4
};

enum CubeSide
{
	ECS_TOP = 0,
	ECS_BOTTOM,
	ECS_RIGHT,
	ECS_LEFT,
	ECS_BACK,
	ECS_FRONT
};

enum Viewport
{
	VIEW_TL = 0,
	VIEW_TR,
	VIEW_BL,
	VIEW_BR
};

enum ViewportType
{
	VIEWT_PERS = 0,
	VIEWT_FRONT,
	VIEWT_LEFT,
	VIEWT_TOP,
	VIEWT_BACK,
	VIEWT_RIGHT,
	VIEWT_BOTTOM
};

// Defines
#include "conf_cmake.hpp"
#define EDITOR_VERSION 1
#define EDITOR_PARSER 1

#endif

