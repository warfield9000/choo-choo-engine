#ifndef Game_HPP_INCLUDED
#define GAME_HPP_INCLUDED

#include <memory>
#include <SFML/Window.hpp>
#include "spdlog/spdlog.h"
#include "spdlog/sinks/basic_file_sink.h"
#include "Scene.hpp"

class Game
{
	public:
		Game(void);
		bool loop(void);
		void close(void);

	private:
		sf::Window m_window;
		std::shared_ptr<Scene> m_root;
		
		//some sort of config file
		static const int m_frameDuration;	// in milliseconds
};

#endif