#include "Start.h"

Start::Start(){
    button = new Button("Launch", 200, 300, 150, 75, 30, 75, 210);
}

bool Start::input(int x, int y, bool down) {
    return (button->input(x, y, down));

}

void Start::render(HDC context) {
    //Create objects
    HBRUSH bg = CreateSolidBrush(RGB(50, 50, 150));
    LPCWSTR title = L"Haunted District";
    RECT rect = { 100, 25, 570, 100 };

    //Bind objects
    SelectObject(context, bg);


    // Draw
    Rectangle(context, 0, 0, gsw, gsh);
    Rectangle(context, rect.left, rect.top, rect.right, rect.bottom);

    HFONT f = (HFONT)GetStockObject(DEFAULT_GUI_FONT);
    LOGFONT lf;
    GetObject(f, sizeof(lf), &lf);
    lf.lfHeight = 60;
    //Other Properties
    HFONT nf = CreateFontIndirect(&lf);
    HFONT of = (HFONT)SelectObject(context, nf);
    SetBkMode(context, TRANSPARENT);
    SetTextColor(context, COLORREF(RGB(255, 255, 0)));
 
    DrawText(context, title, -1, &rect, DT_SINGLELINE | DT_NOCLIP | DT_CENTER);
    SelectObject(context, of); // SET FONT BACK TO PREVIOUS
    button->draw(context);

    // Destruction
    DeleteObject(bg);
}
