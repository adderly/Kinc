#pragma once

#include <Kore/TextureImpl.h>
#include <Kore/Graphics/Image.h>

namespace Kore {
	class TextureUnit : public TextureUnitImpl {

	};

	class Texture : public Image, public TextureImpl {
	public:
		Texture(int width, int height, Format format, bool readable);
		Texture(const char* filename, bool readable = false);
		void set(TextureUnit unit);
		u8* lock();
		void unlock();
		int texWidth;
		int texHeight;
	};
}
