//#include<iostream>
//#include<sstream>
//#include<sfml/graphics.hpp>
//#include<sfml/audio.hpp>
//#include<windows.h>
//using namespace std;
//sf::text stext;
//sf::text stext1;
//std::ostringstream s1;
//std::ostringstream s2;
//int flag = 0;
//double computerplayerspeed = 25;
//int counterp = 0;
//int score1 = 0;
//int score2 = 0;
//int count1 = 0;
//sf::music m1;// change
//
//sf::sound music1,music2,music3/*, music4*/;
//sf::soundbuffer buff,buff1,buff2/*,buff3*/;
//class shape
//{
//public:
//    sf::rectangleshape line;
//    sf::rectangleshape line1;
//    // upper border line
//    void line()
//    {
//        line.setsize(sf::vector2f(800.f, 10.f));
//        line.setfillcolor(sf::color::green);
//    }
//    // lower border line
//    void line1()
//    {
//        line1.setsize(sf::vector2f(800.f, 10.f));
//        line1.setposition(sf::vector2f(0.f, 592.f));
//        line1.setfillcolor(sf::color::green);
//    }
//};
//class move
//{
//protected:
//    float speedx1;
//    float speedy1;
//    sf::vector2f circleposition;
//    sf::vector2f rectanglepos1;
//    sf::vector2f rectanglepos2;
//    shape sp;
//public:
//    sf::circleshape circle1; 
//    sf::rectangleshape rectangle1;
//    sf::rectangleshape rectangle2;
//    sf::floatrect getpositionr1()
//    {
//        return rectangle1.getglobalbounds();
//    }
//    sf::floatrect getpositionr2()
//    {
//        return rectangle2.getglobalbounds();
//    }
//    sf::rectangleshape getshaper1()
//    {
//        return rectangle1;
//    }
//    sf::rectangleshape getshaper2()
//    {
//        return rectangle2;
//    }
//    sf::floatrect getpositionc()
//    {
//        return circle1.getglobalbounds();
//    }
//    sf::circleshape getshapec()
//    {
//        return circle1;
//    }
//    move()
//    {
//        speedx1 = 3;
//        speedy1 = 3;
//        buff.loadfromfile("sound1.wav");
//        buff1.loadfromfile("sound2.wav");
//        buff2.loadfromfile("gameoversound.wav");
//       /* buff3.loadfromfile("welcome.wav");*/
//        music1.setbuffer(buff);
//        music2.setbuffer(buff1);
//        music3.setbuffer(buff2);
//       /* music4.setbuffer(buff3);*/
//    }
//    void circle1shape()
//    {
//        sf::vector2f circleposition(400.f, 300.f);
//        circle1.setposition(circleposition);
//        circle1.setradius(10);
//        circle1.setfillcolor(sf::color::red);
//        circle1.setoutlinethickness(1.f);
//    }
//    void rect1shape()
//    {
//        sf::vector2f rectanglepos1(35.f, 265.f);
//        rectangle1.setsize(sf::vector2f(10.f, 80.f));
//        rectangle1.setposition(rectanglepos1);
//        rectangle1.setfillcolor(sf::color::yellow);
//    }
//    void rect2shape()
//    {
//        sf::vector2f rectanglepos2(750.f, 265.f);
//        rectangle2.setsize(sf::vector2f(10.f, 80.f));
//        rectangle2.setposition(rectanglepos2);
//        rectangle2.setfillcolor(sf::color::yellow);
//    }
//
//    void movementball()
//    {
//        // movement of ball
//        circleposition.x += speedx1;
//        circleposition.y += speedy1;
//        circle1.setposition(circleposition);
//        // when ball strike with left wall then come to centre and rectangle shapes also allign and update the score of playerb
//        if (circleposition.x < 0)
//        {
//            music2.play();
//            circleposition.x = 400;
//            circleposition.y = 300;
//            sf::vector2f rectanglepos2(750.f, 265.f);
//            sf::vector2f rectanglepos1(35.f, 265.f);
//            rectangle1.setposition(rectanglepos1);
//            rectangle2.setposition(rectanglepos2);
//            score2++;
//            s2.str("");
//            s2 << "playerb:" << score2;
//            stext1.setstring(s2.str());
//            sleep(500);
//            if (rand() % 2 == 1)
//            {
//                speedy1 = speedy1 * -1;
//            }
//        }
//        // when ball strike with right wall then come to centre and rectangle shapes also allign and update the score of playera
//        if (circleposition.x > 800 - 20)
//        {
//            music2.play();
//            circleposition.x = 400;
//            circleposition.y = 300;
//            sf::vector2f rectanglepos2(750.f, 265.f);
//            sf::vector2f rectanglepos1(35.f, 265.f);
//            rectangle1.setposition(rectanglepos1);
//            rectangle2.setposition(rectanglepos2);
//            score1++;
//            s1.str("");
//            s1 << "playera:" << score1;
//            stext.setstring(s1.str());
//            sleep(500);
//            if (rand() % 2 == 2)
//            {
//                speedx1 = speedx1 * -1;
//            }
//        }
//        // when ball strike with upper and lower wall it bounce back
//        if (circleposition.y < 0 || circleposition.y>600 - 20)
//        {
//            music1.play();
//            speedy1 = speedy1 * -1;
//        }
//        // bounce ball when collapse with players
//        if (getpositionr1().intersects(getpositionc()))
//        {
//            music1.play();
//            speedx1 = speedx1 * -1;
//
//        }
//        if (getpositionr2().intersects(getpositionc()))
//        {
//            music1.play();
//            speedx1 = speedx1 * -1;
//        }
//        // computer mode--> movement of computer player
//        if (flag ==1)
//        {
//            if (getpositionc().top > (getpositionr2().top) + 15)
//            {
//                if (counterp % 15 == 0)
//                {
//                    rectangle2.move(0, 100);
//                }
//            }
//            if (getpositionc().top < (getpositionr2().top) + 15)
//            {
//                if (counterp % 15 == 0)
//                {
//                    rectangle2.move(0, -100);
//                }
//            }
//            if (circleposition.x > 800)
//            {
//
//                computerplayerspeed = computerplayerspeed * -1;
//            }
//            counterp++;
//        }
//    }
//    void movementrect()
//    {
//        if (sf::keyboard::iskeypressed(sf::keyboard::key::up) || sf::keyboard::iskeypressed(sf::keyboard::key::w))
//        {
//            if (flag ==0)
//            {
//                if (sf::keyboard::iskeypressed(sf::keyboard::key::up))
//                {
//                    rectangle2.move(0, -5);
//                }
//            }
//            if (sf::keyboard::iskeypressed(sf::keyboard::key::w))
//            {
//                rectangle1.move(0, -5);
//            }
//        }
//        // movement of players downward
//        if (sf::keyboard::iskeypressed(sf::keyboard::key::down) || sf::keyboard::iskeypressed(sf::keyboard::key::s))
//        {
//            if (flag == 0)
//            {
//                if (sf::keyboard::iskeypressed(sf::keyboard::key::down))
//                {
//                    rectangle2.move(0, 5);
//                }
//            }
//            if (sf::keyboard::iskeypressed(sf::keyboard::key::s))
//            {
//                rectangle1.move(0, 5);
//            }
//        }
//    }
//};
//class game:public shape,public move
//{
//private:
//    sf::event ev;
//    shape sp;
//    sf::font fonta;
//public:
//    
//    sf::renderwindow* window;
//    sf::text txtp;
//    sf::text txtw;
//    sf::text txtw1;
//    sf::texture texture;
//    sf::texture texture1;
//    sf::rectangleshape back;
//    sf::rectangleshape backgame;
//    void initialize()
//    {
//        /*window = nullptr;*/
//        window = new sf::renderwindow(sf::videomode(800, 600), "pong");
//    }
//    void window()
//    {
//        window = new sf::renderwindow(sf::videomode(800, 600), "pong");
//        window->setframeratelimit(100);
//        fonta.loadfromfile("c:\\users\\zaibi\\onedrive\\desktop\\fonts\\bod_r.ttf");
//        texture.loadfromfile("c:/users/zaibi/downloads/photo.jpg");
//        texture1.loadfromfile("gameback.jpg");
//    }
//    // show score of player1 on screen
//    void score()
//    {
//            s1 << "playera:" << score1;
//            stext.setcharactersize(45);
//            stext.setposition(sf::vector2f(10,10));
//            stext.setfont(fonta);
//            stext.setfillcolor(sf::color::white);
//            stext.setstring(s1.str());
//            
//    }
//    // show score of player2 on screen
//    void score2()
//    {
//        s2 << "playerb:" << score2;
//        stext1.setcharactersize(45);
//        stext1.setposition(sf::vector2f(590, 10));
//        stext1.setfont(fonta);
//        stext1.setfillcolor(sf::color::white);
//        stext1.setstring(s2.str());
//    }
//    // pause messege
//    void pausemessege()
//    {
//        window->clear(sf::color::red);
//        txtp.setfont(fonta);
//        txtp.setstring("game over");
//        txtp.bold;
//        txtp.setposition(270, 180);
//        txtp.setcharactersize(60);
//        txtp.setfillcolor(sf::color::white);
//    }
//    // display winner
//    void winner()
//    {
//        if (score1 ==5)
//        {
//            if (count1 == 0)
//            {
//                music3.play();
//            }
//            count1++;
//            pausemessege();
//            backover();
//            txtw.setfont(fonta);
//            txtw.setstring("playera is winner!");
//            txtw.bold;
//            txtw.setposition(180, 300);
//            txtw.setcharactersize(60);
//            txtw.setfillcolor(sf::color::white);
//            window->draw(back);
//            window->draw(txtp);
//            window->draw(txtw);
//            
//        }
//        if (score2 == 5)
//        {
//            if (count1 == 0)
//            {
//                music3.play();
//            }
//            count1++;
//            pausemessege();
//            backover();
//            txtw1.setfont(fonta);
//            txtw1.setstring("playerb is winner!");
//            txtw1.bold;
//            txtw1.setposition(180, 300);
//            txtw1.setcharactersize(60);
//            txtw1.setfillcolor(sf::color::white);
//            window->draw(back);
//            window->draw(txtw1);
//            window->draw(txtp);
//        }
//    }
//    // background of game over screen
//    void backover()
//    {
//        back.setsize(sf::vector2f(800, 600));
//        texture.setsmooth(false);
//        back.settexture(&texture);
//    }
//    void backgroundimg()
//    {
//        backgame.setsize(sf::vector2f(800, 600));
//        texture1.setsmooth(false);
//        backgame.settexture(&texture1);
//    }
//    // default constructor
//    game()
//    {
//       initialize();
//       window();
//       sp.line();
//       sp.line1();
//       circle1shape();
//       rect1shape();
//       rect2shape();
//       score();
//       score2();
//       backgroundimg();
//    }
//   
//    const bool open() const
//    {
//        return this->window->isopen();
//    }
//    // windows function
//    void poll()
//    {
//        while (window->pollevent(ev))
//        {
//            if (ev.type == sf::event::closed)
//            {
//                window->close();
//            }
//        }
//    }
//    // windows function
//    void update()
//    {
//        poll();
//    }
//    // function to draw all shapes
//   
//    void render()
//    {
//        if (count1 == 0)
//        {
//            /*window->clear(sf::color::blue);*/
//            window->draw(backgame);
//            window->draw(rectangle1);
//            window->draw(rectangle2);
//            window->draw(sp.line);
//            window->draw(sp.line1);
//            movementball();
//            window->draw(circle1);
//            movementrect();
//            window->draw(rectangle1);
//            window->draw(rectangle2);
//            window->draw(stext);
//            window->draw(stext1);
//        }
//            winner();
//            window->display();
//    }
//    // destructor
//    ~game()
//    {
//        if (window != nullptr)
//        {
//            delete window;
//        }
//    }
//};
//
//int main()
//{
//    sf::renderwindow window(sf::videomode(800, 600), "my game");
//    // play game music
//    sf::music m2;
//    // change background of start screen
//
//    sf::rectangleshape back;
//    back.setsize(sf::vector2f(800, 600));
//    sf::texture texture;
//    texture.loadfromfile("c:/users/zaibi/downloads/photo1.jpg");
//    texture.setsmooth(false);
//    back.settexture(&texture);
//    // starting text on screen welcome note
//
//    sf::font font;
//    font.loadfromfile("c:\\users\\zaibi\\onedrive\\desktop\\fonts\\arlrdbd.ttf");
//    sf::text txt;
//    txt.setfont(font);
//    txt.setstring("welcome to pong");
//    txt.bold;
//    txt.setposition(150, 250);
//    txt.setcharactersize(60);
//    txt.setfillcolor(sf::color::white);
//    // press enter to play
//
//    sf::font font1;
//    font1.loadfromfile("c:\\users\\zaibi\\onedrive\\desktop\\fonts\\arlrdbd.ttf");
//    sf::text txt1;
//    txt1.setfont(font1);
//    txt1.setstring("press enter to play vs mode");
//    txt1.bold;
//    txt1.setposition(80, 400);
//    txt1.setcharactersize(40);
//    txt1.setfillcolor(sf::color::cyan);
//    // press rshift to play with computer
//    sf::font font2;
//    font2.loadfromfile("c:\\users\\zaibi\\onedrive\\desktop\\fonts\\arlrdbd.ttf");
//    sf::text txt2;
//    txt2.setfont(font2);
//    txt2.setstring("press rshift to play with comp.");
//    txt2.bold;
//    txt2.setposition(40, 500);
//    txt2.setcharactersize(40);
//    txt2.setfillcolor(sf::color::cyan);
//    m2.openfromfile("start.ogg");
//    m2.play();
//    m2.setvolume(100);
//
//    while (window.isopen())
//    {
//        sf::event event;
//        while (window.pollevent(event))
//        {
//            if (event.type == sf::event::closed)
//                window.close();
//        }
//        /*window.clear();*/
//        window.draw(back);// welcome note background
//        window.draw(txt); // welcome note
//        window.draw(txt1);// enter key note
//        window.draw(txt2);//right shift key note
//
//        
//
//        window.display();
//        if (sf::keyboard::iskeypressed(sf::keyboard::key::enter) == true)
//        {
//            break;
//        }
//        else if (sf::keyboard::iskeypressed(sf::keyboard::key::rshift) == true)
//        {
//            flag = 1;
//            break;
//        }
//    }
//    // close previous window of welcome note
//    window.close();
//    m1.openfromfile("retro.ogg");
//    m1.play();
//    m1.setvolume(20);
//    // display game window
//    game g;
//    while (g.open())
//    {
//        g.update();
//        g.render();
//    }
//    return 0;
//}




#include<iostream>
#include<sstream>
#include<SFML/Graphics.hpp>
#include<SFML/Audio.hpp>
#include<windows.h>
using namespace std;
sf::Text Stext;
sf::Text Stext1;
std::ostringstream s1;
std::ostringstream s2;
int flag = 0;
double computerPlayerSpeed = 25;
int counterP = 0;
int score1 = 0;
int score2 = 0;
int count1 = 0;
sf::Music m1;// change

sf::Sound music1, music2, music3/*, music4*/;
sf::SoundBuffer buff, buff1, buff2/*,buff3*/;
class Shape
{
public:
    sf::RectangleShape line;
    sf::RectangleShape line1;
    // upper border line
    void Line()
    {
        line.setSize(sf::Vector2f(800.f, 10.f));
        line.setFillColor(sf::Color::Green);
    }
    // lower border line
    void Line1()
    {
        line1.setSize(sf::Vector2f(800.f, 10.f));
        line1.setPosition(sf::Vector2f(0.f, 592.f));
        line1.setFillColor(sf::Color::Green);
    }
};
class Move
{
protected:
    float speedX1;
    float speedY1;
    sf::Vector2f circlePosition;
    sf::Vector2f rectanglePos1;
    sf::Vector2f rectanglePos2;
    Shape sp;
public:
    sf::CircleShape circle1;
    sf::RectangleShape rectangle1;
    sf::RectangleShape rectangle2;
    sf::FloatRect getPositionR1()
    {
        return rectangle1.getGlobalBounds();
    }
    sf::FloatRect getPositionR2()
    {
        return rectangle2.getGlobalBounds();
    }
    sf::RectangleShape getshapeR1()
    {
        return rectangle1;
    }
    sf::RectangleShape getshapeR2()
    {
        return rectangle2;
    }
    sf::FloatRect getPositionC()
    {
        return circle1.getGlobalBounds();
    }
    sf::CircleShape getshapeC()
    {
        return circle1;
    }
    Move()
    {
        speedX1 = 3;
        speedY1 = 3;
        buff.loadFromFile("Sound1.wav");
        buff1.loadFromFile("Sound2.wav");
        buff2.loadFromFile("GameOverSound.wav");
        /* buff3.loadFromFile("welcome.wav");*/
        music1.setBuffer(buff);
        music2.setBuffer(buff1);
        music3.setBuffer(buff2);
        /* music4.setBuffer(buff3);*/
    }
    void circle1shape()
    {
        sf::Vector2f circlePosition(400.f, 300.f);
        circle1.setPosition(circlePosition);
        circle1.setRadius(10);
        circle1.setFillColor(sf::Color::Red);
        circle1.setOutlineThickness(1.f);
    }
    void rect1shape()
    {
        sf::Vector2f rectanglePos1(35.f, 265.f);
        rectangle1.setSize(sf::Vector2f(10.f, 80.f));
        rectangle1.setPosition(rectanglePos1);
        rectangle1.setFillColor(sf::Color::Yellow);
    }
    void rect2shape()
    {
        sf::Vector2f rectanglePos2(750.f, 265.f);
        rectangle2.setSize(sf::Vector2f(10.f, 80.f));
        rectangle2.setPosition(rectanglePos2);
        rectangle2.setFillColor(sf::Color::Yellow);
    }

    void MovementBall()
    {
        // Movement of Ball
        circlePosition.x += speedX1;
        circlePosition.y += speedY1;
        circle1.setPosition(circlePosition);
        // when ball strike with left wall then come to centre and rectangle shapes also allign and update the score of playerB
        if (circlePosition.x < 0)
        {
            music2.play();
            circlePosition.x = 400;
            circlePosition.y = 300;
            sf::Vector2f rectanglePos2(750.f, 265.f);
            sf::Vector2f rectanglePos1(35.f, 265.f);
            rectangle1.setPosition(rectanglePos1);
            rectangle2.setPosition(rectanglePos2);
            score2++;
            s2.str("");
            s2 << "PlayerB:" << score2;
            Stext1.setString(s2.str());
            Sleep(500);
            if (rand() % 2 == 1)
            {
                speedY1 = speedY1 * -1;
            }
        }
        // when ball strike with right wall then come to centre and rectangle shapes also allign and update the score of playerA
        if (circlePosition.x > 800 - 20)
        {
            music2.play();
            circlePosition.x = 400;
            circlePosition.y = 300;
            sf::Vector2f rectanglePos2(750.f, 265.f);
            sf::Vector2f rectanglePos1(35.f, 265.f);
            rectangle1.setPosition(rectanglePos1);
            rectangle2.setPosition(rectanglePos2);
            score1++;
            s1.str("");
            s1 << "PlayerA:" << score1;
            Stext.setString(s1.str());
            Sleep(500);
            if (rand() % 2 == 2)
            {
                speedX1 = speedX1 * -1;
            }
        }
        // when ball strike with upper and lower wall it bounce back
        if (circlePosition.y < 0 || circlePosition.y>600 - 20)
        {
            music1.play();
            speedY1 = speedY1 * -1;
        }
        // bounce ball when collapse with players
        if (getPositionR1().intersects(getPositionC()))
        {
            music1.play();
            speedX1 = speedX1 * -1;

        }
        if (getPositionR2().intersects(getPositionC()))
        {
            music1.play();
            speedX1 = speedX1 * -1;
        }
        // computer mode--> movement of computer player
        if (flag == 1)
        {
            if (getPositionC().top > (getPositionR2().top) + 15)
            {
                if (counterP % 15 == 0)
                {
                    rectangle2.move(0, 100);
                }
            }
            if (getPositionC().top < (getPositionR2().top) + 15)
            {
                if (counterP % 15 == 0)
                {
                    rectangle2.move(0, -100);
                }
            }
            if (circlePosition.x > 800)
            {

                computerPlayerSpeed = computerPlayerSpeed * -1;
            }
            counterP++;
        }
    }
    void MovementRect()
    {
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Up) || sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W))
        {
            if (flag == 0)
            {
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Up))
                {
                    rectangle2.move(0, -5);
                }
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W))
            {
                rectangle1.move(0, -5);
            }
        }
        // movement of players downward
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Down) || sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S))
        {
            if (flag == 0)
            {
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Down))
                {
                    rectangle2.move(0, 5);
                }
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S))
            {
                rectangle1.move(0, 5);
            }
        }
    }
};
class Game :public Shape, public Move
{
private:
    sf::Event ev;
    Shape sp;
    sf::Font fontA;
public:

    sf::RenderWindow* window;
    sf::Text txtP;
    sf::Text txtW;
    sf::Text txtW1;
    sf::Texture texture;
    sf::Texture texture1;
    sf::RectangleShape back;
    sf::RectangleShape backGame;
    void initialize()
    {
        /*window = nullptr;*/
        window = new sf::RenderWindow(sf::VideoMode(800, 600), "PONG");
    }
    void Window()
    {
        window = new sf::RenderWindow(sf::VideoMode(800, 600), "PONG");
        window->setFramerateLimit(100);
        fontA.loadFromFile("C:\\Users\\zaibi\\OneDrive\\Desktop\\fonts\\BOD_R.ttf");
        texture.loadFromFile("C:/Users/zaibi/Downloads/photo.jpg");
        texture1.loadFromFile("gameback.jpg");
    }
    // show score of player1 on screen
    void score()
    {
        s1 << "PlayerA:" << score1;
        Stext.setCharacterSize(45);
        Stext.setPosition(sf::Vector2f(10, 10));
        Stext.setFont(fontA);
        Stext.setFillColor(sf::Color::White);
        Stext.setString(s1.str());

    }
    // show score of player2 on screen
    void Score2()
    {
        s2 << "PlayerB:" << score2;
        Stext1.setCharacterSize(45);
        Stext1.setPosition(sf::Vector2f(590, 10));
        Stext1.setFont(fontA);
        Stext1.setFillColor(sf::Color::White);
        Stext1.setString(s2.str());

    }
    // Pause Messege
    void PauseMessege()
    {
        window->clear(sf::Color::Red);
        txtP.setFont(fontA);
        txtP.setString("Game Over");
        txtP.Bold;
        txtP.setPosition(270, 180);
        txtP.setCharacterSize(60);
        txtP.setFillColor(sf::Color::White);
    }
    // Display Winner
    void Winner()
    {
        if (score1 == 5)
        {
            if (count1 == 0)
            {
                music3.play();
            }
            count1++;
            PauseMessege();
            BackOver();
            txtW.setFont(fontA);
            txtW.setString("PlayerA Is Winner!");
            txtW.Bold;
            txtW.setPosition(180, 300);
            txtW.setCharacterSize(60);
            txtW.setFillColor(sf::Color::White);
            window->draw(back);
            window->draw(txtP);
            window->draw(txtW);

        }
        if (score2 == 5)
        {
            if (count1 == 0)
            {
                music3.play();
            }
            count1++;
            PauseMessege();
            BackOver();
            txtW1.setFont(fontA);
            txtW1.setString("PlayerB Is Winner!");
            txtW1.Bold;
            txtW1.setPosition(180, 300);
            txtW1.setCharacterSize(60);
            txtW1.setFillColor(sf::Color::White);
            window->draw(back);
            window->draw(txtW1);
            window->draw(txtP);
        }
    }
    // Background of Game Over Screen
    void BackOver()
    {
        back.setSize(sf::Vector2f(800, 600));
        texture.setSmooth(false);
        back.setTexture(&texture);
    }
    void backgroundimg()
    {
        backGame.setSize(sf::Vector2f(800, 600));
        texture1.setSmooth(false);
        backGame.setTexture(&texture1);
    }
    // default constructor
    Game()
    {
        initialize();
        Window();
        sp.Line();
        sp.Line1();
        circle1shape();
        rect1shape();
        rect2shape();
        score();
        Score2();
        backgroundimg();
    }

    const bool Open() const
    {
        return this->window->isOpen();
    }
    // windows function
    void Poll()
    {
        while (window->pollEvent(ev))
        {
            if (ev.type == sf::Event::Closed)
            {
                window->close();
            }
        }
    }
    // windows function
    void update()
    {
        Poll();
    }
    // function to draw all shapes

    void Render()
    {
        if (count1 == 0)
        {
            /*window->clear(sf::Color::Blue);*/
            window->draw(backGame);
            window->draw(rectangle1);
            window->draw(rectangle2);
            window->draw(sp.line);
            window->draw(sp.line1);
            MovementBall();
            window->draw(circle1);
            MovementRect();
            window->draw(rectangle1);
            window->draw(rectangle2);
            window->draw(Stext);
            window->draw(Stext1);
        }
        Winner();
        window->display();
    }
    // destructor
    ~Game()
    {
        if (window != nullptr)
        {
            delete window;
        }
    }
};

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "My Game");
    // play game music
    sf::Music m2;
    // Change Background of start screen

    sf::RectangleShape back;
    back.setSize(sf::Vector2f(800, 600));
    sf::Texture texture;
    texture.loadFromFile("C:/Users/zaibi/Downloads/photo1.jpg");
    texture.setSmooth(false);
    back.setTexture(&texture);
    // Starting Text on screen welcome note

    sf::Font font;
    font.loadFromFile("C:\\Users\\zaibi\\OneDrive\\Desktop\\fonts\\ARLRDBD.ttf");
    sf::Text txt;
    txt.setFont(font);
    txt.setString("Welcome To PONG");
    txt.Bold;
    txt.setPosition(150, 250);
    txt.setCharacterSize(60);
    txt.setFillColor(sf::Color::White);
    // press enter to play

    sf::Font font1;
    font1.loadFromFile("C:\\Users\\zaibi\\OneDrive\\Desktop\\fonts\\ARLRDBD.ttf");
    sf::Text txt1;
    txt1.setFont(font1);
    txt1.setString("PRESS ENTER TO PLAY VS MODE");
    txt1.Bold;
    txt1.setPosition(80, 400);
    txt1.setCharacterSize(40);
    txt1.setFillColor(sf::Color::Cyan);
    // press Rshift to play with computer
    sf::Font font2;
    font2.loadFromFile("C:\\Users\\zaibi\\OneDrive\\Desktop\\fonts\\ARLRDBD.ttf");
    sf::Text txt2;
    txt2.setFont(font2);
    txt2.setString("PRESS RSHIFT TO PLAY WITH COMP.");
    txt2.Bold;
    txt2.setPosition(40, 500);
    txt2.setCharacterSize(40);
    txt2.setFillColor(sf::Color::Cyan);
    m2.openFromFile("start.ogg");
    m2.play();
    m2.setVolume(100);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        /*window.clear();*/
        window.draw(back);// welcome note background
        window.draw(txt); // welcome note
        window.draw(txt1);// enter key note
        window.draw(txt2);//Right Shift key note



        window.display();
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Enter) == true)
        {
            break;
        }
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::RShift) == true)
        {
            flag = 1;
            break;
        }
    }
    // close previous window of welcome note
    window.close();
    m1.openFromFile("retro.ogg");
    m1.play();
    m1.setVolume(100);
    // display game window
    Game g;
    while (g.Open())
    {
        g.update();
        g.Render();
    }
    return 0;
}