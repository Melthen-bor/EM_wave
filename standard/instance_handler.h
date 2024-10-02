#ifndef FERRUM_INSTANCE_HANDLER
#define FERRUM_INSTANCE_HANDLER
#include "graphics.h"
namespace fer {
	struct input {
		fbyte key;
		fbyte action;
	};
	struct instance {
		std::vector<input> inputs;
		Window window;
		fbyte is_active;
	};
	instance* current_instance;
	void key_func(GLFWwindow* window, int key, int scancode, int action, int mods) {
		input buffer;
		bool Register = 1;
		switch (action) {
		case 0:
			buffer.action = 0;
			break;
		case 1:
			buffer.action = 1;
			break;
		case 2:
			Register = 0;
		}
		switch (key) {
		case GLFW_KEY_0:
			buffer.key = 0;
#define INPUT_0 0
			break;
		case GLFW_KEY_1:
			buffer.key = 1;
#define INPUT_1 1
			break;
		case GLFW_KEY_2:
			buffer.key = 2;
#define INPUT_2
			break;
		case GLFW_KEY_3:
			buffer.key = 3;
#define INPUT_3 3
			break;
		case GLFW_KEY_4:
			buffer.key = 4;
#define INPUT_4 4
			break;
		case GLFW_KEY_5:
			buffer.key = 5;
#define INPUT_5 5
			break;
		case GLFW_KEY_6:
			buffer.key = 6;
#define INPUT_6 6
			break;
		case GLFW_KEY_7:
			buffer.key = 7;
#define INPUT_7 7
			break;
		case GLFW_KEY_8:
			buffer.key = 8;
#define INPUT_8 8
			break;
		case GLFW_KEY_9:
			buffer.key = 9;
#define INPUT_9 9
			break;
		case GLFW_KEY_A:
			buffer.key = 10;
#define INPUT_A 10
			break;
		case GLFW_KEY_B:
			buffer.key = 11;
#define INPUT_B 11
			break;
		case GLFW_KEY_C:
			buffer.key = 12;
#define INPUT_C 12
			break;
		case GLFW_KEY_D:
			buffer.key = 13;
#define INPUT_D 13
			break;
		case GLFW_KEY_E:
			buffer.key = 14;
#define INPUT_E 14
			break;
		case GLFW_KEY_F:
			buffer.key = 15;
#define INPUT_F 15
			break;
		case GLFW_KEY_G:
			buffer.key = 16;
#define INPUT_G 16
			break;
		case GLFW_KEY_H:
			buffer.key = 17;
#define INPUT_H 17
			break;
		case GLFW_KEY_I:
			buffer.key = 18;
#define INPUT_I 18
			break;
		case GLFW_KEY_J:
			buffer.key = 19;
#define INPUT_J 19
			break;
		case GLFW_KEY_K:
			buffer.key = 20;
#define INPUT_K 20
			break;
		case GLFW_KEY_L:
			buffer.key = 21;
#define INPUT_L 21
			break;
		case GLFW_KEY_M:
			buffer.key = 22;
#define INPUT_M 22
			break;
		case GLFW_KEY_N:
			buffer.key = 23;
#define INPUT_N 23
			break;
		case GLFW_KEY_O:
			buffer.key = 24;
#define INPUT_O 24
			break;
		case GLFW_KEY_P:
			buffer.key = 25;
#define INPUT_P 25
			break;
		case GLFW_KEY_Q:
			buffer.key = 26;
#define INPUT_Q 26
			break;
		case GLFW_KEY_R:
			buffer.key = 27;
#define INPUT_R 27
			break;
		case GLFW_KEY_S:
			buffer.key = 28;
#define INPUT_S 28
			break;
		case GLFW_KEY_T:
			buffer.key = 29;
#define INPUT_T 29
			break;
		case GLFW_KEY_U:
			buffer.key = 30;
#define INPUT_U 30
			break;
		case GLFW_KEY_V:
			buffer.key = 31;
#define INPUT_V 31
			break;
		case GLFW_KEY_W:
			buffer.key = 32;
#define INPUT_W 32
			break;
		case GLFW_KEY_X:
			buffer.key = 33;
#define INPUT_X 33
			break;
		case GLFW_KEY_Y:
			buffer.key = 34;
#define INPUT_Y 34
			break;
		case GLFW_KEY_Z:
			buffer.key = 35;
#define INPUT_Z 35
			break;
		case GLFW_KEY_LEFT:
			buffer.key = 36;
#define INPUT_LEFT 36
			break;
		case GLFW_KEY_LEFT_ALT:
			buffer.key = 37;
#define INPUT_LEFT_ALT 37
			break;
		case GLFW_KEY_LEFT_BRACKET:
			buffer.key = 38;
#define INPUT_LEFT_BRACKET 38
			break;
		case GLFW_KEY_LEFT_CONTROL:
			buffer.key = 39;
#define INPUT_LEFT_CONTROL 39
			break;
		case GLFW_KEY_LEFT_SHIFT:
			buffer.key = 40;
#define INPUT_LEFT_SHIFT 40
			break;
		case GLFW_KEY_LEFT_SUPER:
			buffer.key = 41;
#define INPUT_LEFT_SUPER 41
			break;
		case GLFW_KEY_RIGHT:
			buffer.key = 42;
#define INPUT_RIGHT 42
			break;
		case GLFW_KEY_RIGHT_ALT:
			buffer.key = 43;
#define INPUT_RIGHT_ALT 43
			break;
		case GLFW_KEY_RIGHT_BRACKET:
			buffer.key = 44;
#define INPUT_RIGHT_BRACKET 44
			break;
		case GLFW_KEY_RIGHT_CONTROL:
			buffer.key = 45;
#define INPUT_RIGHT_CONTROL 45
			break;
		case GLFW_KEY_RIGHT_SHIFT:
			buffer.key = 46;
#define INPUT_RIGHT_SHIFT 46
			break;
		case GLFW_KEY_RIGHT_SUPER:
			buffer.key = 47;
#define INPUT_RIGHT_SUPER 47
			break;
		case GLFW_KEY_UP:
			buffer.key = 48;
#define INPUT_UP 48
			break;
		case GLFW_KEY_DOWN:
			buffer.key = 49;
#define INPUT_DOWN 49
			break;
		case GLFW_KEY_F1:
			buffer.key = 50;
#define INPUT_F1 50
			break;
		case GLFW_KEY_F2:
			buffer.key = 51;
#define INPUT_F2 51
			break;
		case GLFW_KEY_F3:
			buffer.key = 52;
#define INPUT_F3 52
			break;
		case GLFW_KEY_F4:
			buffer.key = 53;
#define INPUT_F4 53
			break;
		case GLFW_KEY_F5:
			buffer.key = 54;
#define INPUT_F5 54
			break;
		case GLFW_KEY_F6:
			buffer.key = 55;
#define INPUT_F6 55
			break;
		case GLFW_KEY_F7:
			buffer.key = 56;
#define INPUT_F7 56
			break;
		case GLFW_KEY_F8:
			buffer.key = 57;
#define INPUT_F8 57
			break;
		case GLFW_KEY_F9:
			buffer.key = 58;
#define INPUT_F9 58
			break;
		case GLFW_KEY_F10:
			buffer.key = 59;
#define INPUT_F10 59
			break;
		case GLFW_KEY_F11:
			buffer.key = 60;
#define INPUT_F11 60
			break;
		case GLFW_KEY_F12:
			buffer.key = 61;
#define INPUT_F12 61
			break;
		case GLFW_KEY_F13:
			buffer.key = 62;
#define INPUT_F13 62
			break;
		case GLFW_KEY_F14:
			buffer.key = 63;
#define INPUT_F14 63
			break;
		case GLFW_KEY_F15:
			buffer.key = 64;
#define INPUT_F15 64
			break;
		case GLFW_KEY_F16:
			buffer.key = 65;
#define INPUT_F16 65
			break;
		case GLFW_KEY_F17:
			buffer.key = 66;
#define INPUT_F17 66
			break;
		case GLFW_KEY_F18:
			buffer.key = 67;
#define INPUT_F18 67
			break;
		case GLFW_KEY_F19:
			buffer.key = 68;
#define INPUT_F19 68
			break;
		case GLFW_KEY_F20:
			buffer.key = 69;
#define INPUT_F20 69
			break;
		case GLFW_KEY_F21:
			buffer.key = 70;
#define INPUT_F21 70
			break;
		case GLFW_KEY_F22:
			buffer.key = 71;
#define INPUT_F22 71
			break;
		case GLFW_KEY_F23:
			buffer.key = 72;
#define INPUT_F23 72
			break;
		case GLFW_KEY_F24:
			buffer.key = 73;
#define INPUT_F24 73
			break;
		case GLFW_KEY_F25:
			buffer.key = 74;
#define INPUT_F25 74
			break;
		case GLFW_KEY_EQUAL:
			buffer.key = 75;
#define INPUT_EQUAL 75
			break;
		case GLFW_KEY_GRAVE_ACCENT:
			buffer.key = 76;
#define INPUT_GRAVE 76
			break;
		case GLFW_KEY_HOME:
			buffer.key = 77;
#define INPUT_HOME 77
			break;
		case GLFW_KEY_APOSTROPHE:
			buffer.key = 78;
#define INPUT_APOSTROPHE 78
			break;
		case GLFW_KEY_BACKSLASH:
			buffer.key = 79;
#define INPUT_BACKSLASH 79
			break;
		case GLFW_KEY_BACKSPACE:
			buffer.key = 80;
#define INPUT_BACKSPACE 80
			break;
		case GLFW_KEY_CAPS_LOCK:
			buffer.key = 81;
#define INPUT_CAPS_LOCK 81
			break;
		case GLFW_KEY_COMMA:
			buffer.key = 82;
#define INPUT_COMMA 82
			break;
		case GLFW_KEY_DELETE:
			buffer.key = 83;
#define INPUT_DELETE 83
			break;
		case GLFW_KEY_END:
			buffer.key = 84;
#define INPUT_END 84
			break;
		case GLFW_KEY_ENTER:
			buffer.key = 85;
#define INPUT_ENTER 85
			break;
		case GLFW_KEY_ESCAPE:
			buffer.key = 86;
#define INPUT_ESCAPE 86
			break;
		case GLFW_KEY_INSERT:
			buffer.key = 87;
#define INPUT_INSERT 87
			break;
		case GLFW_KEY_KP_0:
			buffer.key = 88;
#define INPUT_KP_0 88
			break;
		case GLFW_KEY_KP_1:
			buffer.key = 89;
#define INPUT_KP_1 89
			break;
		case GLFW_KEY_KP_2:
			buffer.key = 90;
#define INPUT_KP_2 90
			break;
		case GLFW_KEY_KP_3:
			buffer.key = 91;
#define INPUT_KP_3 91
			break;
		case GLFW_KEY_KP_4:
			buffer.key = 92;
#define INPUT_KP_4 92
			break;
		case GLFW_KEY_KP_5:
			buffer.key = 93;
#define INPUT_KP_5 93
			break;
		case GLFW_KEY_KP_6:
			buffer.key = 94;
#define INPUT_KP_6 94
			break;
		case GLFW_KEY_KP_7:
			buffer.key = 95;
#define INPUT_KP_7 95
			break;
		case GLFW_KEY_KP_8:
			buffer.key = 96;
#define INPUT_KP_8 96
			break;
		case GLFW_KEY_KP_9:
			buffer.key = 97;
#define INPUT_KP_9 97
			break;
		case GLFW_KEY_KP_ADD:
			buffer.key = 98;
#define INPUT_KP_ADD 98
			break;
		case GLFW_KEY_KP_DECIMAL:
			buffer.key = 99;
#define INPUT_KP_DECIMAL 99
			break;
		case GLFW_KEY_KP_DIVIDE:
			buffer.key = 100;
#define INPUT_KP_DIVIDE 100
			break;
		case GLFW_KEY_KP_ENTER:
			buffer.key = 101;
#define INPUT_KP_ENTER 101
			break;
		case GLFW_KEY_KP_EQUAL:
			buffer.key = 102;
#define INPUT_KP_EQUAL 102
			break;
		case GLFW_KEY_KP_MULTIPLY:
			buffer.key = 103;
#define INPUT_KP_MULTIPLY 103
			break;
		case GLFW_KEY_KP_SUBTRACT:
			buffer.key = 104;
#define INPUT_KP_SUBTRACT 104
			break;
		case GLFW_KEY_LAST:
			buffer.key = 105;
#define INPUT_LAST 105
			break;
		case GLFW_KEY_MINUS:
			buffer.key = 106;
#define INPUT_MINUS 106
			break;
		case GLFW_KEY_NUM_LOCK:
			buffer.key = 107;
#define INPUT_NUM_LOCK 107
			break;
		case GLFW_KEY_PAGE_DOWN:
			buffer.key = 108;
#define INPUT_PAGE_DOWN 108
			break;
		case GLFW_KEY_PAGE_UP:
			buffer.key = 109;
#define INPUT_PAGE_UP 109
			break;
		case GLFW_KEY_PAUSE:
			buffer.key = 110;
#define INPUT_PAUSE 110
			break;
		case GLFW_KEY_PERIOD:
			buffer.key = 111;
#define INPUT_PERIOD 111
			break;
		case GLFW_KEY_PRINT_SCREEN:
			buffer.key = 112;
#define INPUT_PRINT_SCREEN 112;
			break;
		case GLFW_KEY_SCROLL_LOCK:
			buffer.key = 113;
#define INPUT_SCROLL_LOCK 113;
			break;
		case GLFW_KEY_SEMICOLON:
			buffer.key = 114;
#define INPUT_SEMICOLON 114
			break;
		case GLFW_KEY_SLASH:
			buffer.key = 115;
#define INPUT_SLASH 115
			break;
		case GLFW_KEY_SPACE:
			buffer.key = 116;
#define INPUT_SPACE 116
			break;
		case GLFW_KEY_TAB:
			buffer.key = 117;
#define INPUT_TAB 117
			break;
		case GLFW_KEY_WORLD_1:
			buffer.key = 118;
#define INPUT_WORLD1 118
			break;
		case GLFW_KEY_WORLD_2:
			buffer.key = 119;
#define INPUT_WORLD2 119
			break;
		}
		if (Register) {
			current_instance->inputs.push_back(buffer);
		}
	}
	void framebuffer_size_callback(GLFWwindow* window, int width, int height) {
		current_instance->window.height = height;
		current_instance->window.width = width;
		glViewport(0, 0, width, height);
	}
	input get_last_input() {
		if (current_instance->inputs.size() == 0) {
			return input{ 66,6 };
		}
		return remove_first<input>(current_instance->inputs);
	}
	instance init_instance(int width, int height, std::string name) {
		instance new_instance;
		new_instance.window = init_window(width, height, name);
		glfwSetKeyCallback(new_instance.window.window, key_func);
		glfwSetFramebufferSizeCallback(new_instance.window.window, framebuffer_size_callback);
		new_instance.is_active = 0;
		return new_instance;
	}
	fbyte setup() {
		if (!glfwInit()) {
			return 1;
		}
		current_instance = nullptr;
		return 0;
	}
	fbyte make_instance_current(instance& instant) {
		current_instance = &instant;
		glfwMakeContextCurrent(instant.window.window);
		if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
			glfwTerminate();
			return 1;
		}
		glViewport(0, 0, instant.window.width, instant.window.height);
		instant.is_active = 1;
		return 0;
	}
	void make_instance_noncurrent() {
		current_instance = nullptr;
		glfwMakeContextCurrent(NULL);
	}
	void del_instance(instance& instant) {
		glfwDestroyWindow(instant.window.window);
		instant.window.window = nullptr;
		instant.is_active = 0;
	}
	bool should_current_instance_close() {
		return glfwWindowShouldClose(current_instance->window.window);
	}
	void render_current_instance_cleanup() {
		glfwSwapBuffers(current_instance->window.window);
		glfwPollEvents();
	}
	void cleanup(std::vector<instance>& instances) {
		current_instance = nullptr;
		instances.clear();
		glfwTerminate();
	}
	void close() {
		glfwSetWindowShouldClose(current_instance->window.window, 1);
	}
};
#endif
