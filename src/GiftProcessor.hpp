#pragma once


namespace GiftProcessor {


	void processor(float dtime);
	bool quit_menu();
	std::pair<bool, std::string> set_item_choice(int id);
	bool is_planting_fertile_soil();
	std::pair<bool, std::string> set_slider_choice(int pos);
};









