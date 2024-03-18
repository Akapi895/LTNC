#include <iostream>
#include <SDL.h>
#include <SDL_image.h>
#include "graphics.h"
#include "defs.h"
#include "logic.h"

using namespace std;

void waitUntilKeyPressed()
{
    SDL_Event e;
    while (true) {
        if ( SDL_PollEvent(&e) != 0 &&
             (e.type == SDL_KEYDOWN || e.type == SDL_QUIT) )
            return;
        SDL_Delay(100);
    }
}

void processClick(int x, int y, Tictactoe& game) {
    int clickedCol = (x - BOARD_X) / CELL_SIZE;
    int clickedRow = (y - BOARD_Y) / CELL_SIZE;
    if (game.board[clickedRow][clickedCol] != EMPTY_CELL) return;
    game.move(clickedRow, clickedCol);
}
//assad;affaf
bool CheckWin(Tictactoe &game, int x, int y) {
    int cntCheo1(0), cntCheo2(0), cntNgang(0), cntDoc(0);
    int then = game.place[x][y];
    int _x(x), _y(y);

    //check ngang
    _x = x; _y = y;
    while (game.place[_x][_y] == then) {
        if (_y < 0) break;
        cntNgang++;
        _y -= 1;
    }
    _y = y;
    while (game.place[_x][_y] == then) {
        if (_y >= BOARD_SIZE) break;
        cntNgang++;
        _y += 1;
    }
    if (cntNgang >= 5) return 1;

    //check doc
    _x = x; _y = y;
    while (game.place[_x][_y] == then) {
        if (_x < 0) break;
        cntDoc++;
        _x -= 1;
    }
    _x = x;
    while (game.place[_x][_y] == then) {
        if (_x >= BOARD_SIZE) break;
        cntNgang++;
        _x += 1;
    }
    if (cntDoc >= 5) return 1;

    //check Cheo1
    _x = x; _y = y;
    while (game.place[_x][_y] == then) {
        if (_x < 0 || _y < 0) break;
        cntCheo1++;
        _x -= 1;
        _y -= 1;
    }
    _x = x; _y = y;
    while (game.place[_x][_y] == then) {
        if (_x >= BOARD_SIZE || _y >= BOARD_SIZE) break;
        cntCheo1++;
        _x += 1;
        _y += 1;
    }
    if (cntCheo1 >= 5) return 1;

     //check Cheo2
    _x = x; _y = y;
    while (game.place[_x][_y] == then) {
        if (_x < 0 || _y >= BOARD_SIZE) break;
        cntCheo2++;
        _x -= 1;
        _y += 1;
    }
    _x = x; _y = y;
    while (game.place[_x][_y] == then) {
        if (_x >= BOARD_SIZE || _y < 0) break;
        cntCheo2++;
        _x += 1;
        _y -= 1;
    }
    if (cntCheo2 >= 5) return 1;

    return 0;
}

int main(int argc, char *argv[])
{
    Graphics graphics;
    graphics.init();

    Tictactoe game;
    game.init();
    graphics.render(game);

    int x, y;
    SDL_Event event;
    bool quit = false;
    while (! quit) {
        SDL_PollEvent(&event);
        switch (event.type) {
            case SDL_QUIT:
                 quit = true;
                 break;
            case SDL_MOUSEBUTTONDOWN:
                 SDL_GetMouseState(&x, &y);
                 processClick(x, y, game);
                 graphics.render(game);
                 if (CheckWin(game, x, y)) {
                    cout << (game.place[x][y] == 1)? "Player 1 win!" : "Player 2 win";
                    quit = true;
                 }
                 break;
        }
        SDL_Delay(100);
    }

    graphics.quit();
    return 0;
}
