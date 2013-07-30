#include "stream.h"

Stream::Stream(int id){
	this->id = id;
	switch(this->id){
		case 1:
			this->image = carregaImagem("data/stream1.png");
			this->box.x = 10;
			this->box.y = 10;
		break;
		case 2:
			this->image = carregaImagem("data/stream2.png");
			this->box.x = 360;
			this->box.y = 10;
		break;
		case 3:
			this->image = carregaImagem("data/stream3.png");
			this->box.x = 10;
			this->box.y = 360;
		break;
		case 4:
			this->image = carregaImagem("data/stream4.png");
			this->box.x = 360;
			this->box.y = 360;
		break;
	}

	this->box.w = 30;
	this->box.h = 30;

}

Stream::~Stream(){
	SDL_FreeSurface(this->image);
}

void Stream::draw(){
	SDL_BlitSurface(this->image,NULL,SDL_GetVideoSurface(),&this->box);
}

void Stream::update(Uint32 delta){

}

void Stream::draw_balls(){

}