//#include <iostream>
//#include <vector>

#include <OpenImageIO/texture.h>

using namespace std;

int main()
{
	auto textureSytem = OIIO::TextureSystem::create();

	OIIO::ustring filename("Skydome.pfm");
	OIIO::TextureOpt options;
	float s = 0.5;
	float t = 0.5;
	float dsdx = 0;
	float dtdx = 0;
	float dsdy = 0;
	float dtdy = 0;
	int nchannels = 3;
	float result[3];
	auto successful = textureSytem->texture(filename, options, s, t, dsdx, dtdx, dsdy, dtdy, nchannels, result);
	cout << result[0] << " " << result[1] << " " << result[2] << endl;
	OIIO::TextureSystem::destroy(textureSytem);
}

