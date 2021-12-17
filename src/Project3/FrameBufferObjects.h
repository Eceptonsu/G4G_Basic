#pragma once

void setupHdrBloom(unsigned int* hdrFBO, unsigned int* pingpongFBO, unsigned int* colorBuffers, unsigned int* pingpongColorbuffers, unsigned int scrn_width = 1280, unsigned int scrn_height = 720);
unsigned int setupFrameBuffer(unsigned int* offscreenFBO, unsigned int scrn_width = 1280, unsigned int scrn_height = 720);
unsigned int setupDepthMap(unsigned int* depthMapFBO, unsigned int SHADOW_WIDTH = 1024, unsigned int SHADOW_HEIGHT = 1024);