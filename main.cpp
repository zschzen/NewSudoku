#include "Vosgi.h"

class MyGame : public Vosgi {
public:
    MyGame(int screenWidth, int screenHeight) : Vosgi(screenWidth, screenHeight) {}

    void onInit() override {
        // Initialize your game resources here
    }

    void onUpdate() override {
        // Update your game logic here
    }

    void onDraw() override {
        // Draw your game graphics here
    }

    void onClose() override {
        // Close and free resources here
    }
};

int main() {
    const int screenWidth = 800;
    const int screenHeight = 450;

    MyGame myGame(screenWidth, screenHeight);
    myGame.run();

    return 0;
}
