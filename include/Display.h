#ifndef DISPLAY_H
#define DISPLAY_H

#include <string>

class Display {

    public:
        Display(int width, int height, std::string title);
        virtual ~Display();

        void init();
        void update();
        void destroy();

    private:
        int width;
        int height;
        std::string title;

};

#endif // DISPLAY_H
