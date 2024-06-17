#include <iostream>
#include <cstring>
using namespace std;

class CWH
{
protected:
    string title;
    float rating;
    // CWH(){}
    public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
    void display();
};
class CWHvideo : public CWH
{
    float vlength;

public:
    CWHvideo(string s, float vl, float r) : CWH(s, r)
    {
        vlength = vl;
    }
   virtual void display()
    {
        cout << "rating of your video is" << rating << "out of 5";
        cout << "length of yor video is" << vlength << endl;
        cout << "title of the video is" << title << endl;
    }
};
    class CWHtext : public CWH
    {
        float wordcount;

    public:
        CWHtext(string s, int wc, float r) : CWH(s, r)
        {
            wordcount = wc;
        }

        virtual void display()
        {
            cout << "rating of your text is" << rating << "out of 5"<<endl;
            cout << "length of yor video is" << wordcount << endl;
            cout << "title of the text is" << title << endl;
        }
    };
    /*int main(){
     float vlength , rating;
     int wordcount;
     string title;
     
     title = "your video";
     vlength = 4.59;
     rating = 4.23;
     //CWHvideo django(title, rating, vlength);
     //CWHtext django(title, rating, vlength);
     //django.display();

     CWH* tuts[2];
     tuts[0] = &djvideo;
     tuts[1] = &djtext;

     tuts[0]->display();
     tuts[1]->display();


    }*/
    int main(){
    string title;
    float rating, vlength;
    int wordcount;

    // for Code With Harry Video
    title = "Django tutorial";
    vlength = 4.56;
    rating = 4.89;
    CWHvideo djVideo(title, rating, vlength);

    // for Code With Harry Text
    title = "Django tutorial Text";
    wordcount = 433;
    rating = 4.19;
    CWHtext djText(title, rating, wordcount);

    CWH* tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}