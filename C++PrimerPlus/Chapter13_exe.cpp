#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

class Cd {
private:
    char performers[50];
    char label[20];
    int  selections;
    double playtime;
public:
    Cd(char *s1, char * s2, int n, double x);
    Cd(const Cd & d);
    Cd();
    virtual ~Cd();
    virtual void Report() const;
    virtual Cd & operator=(const Cd & d);
};

class Classic : public Cd {
private:
    char songs[50];
public:
    Classic(char * s3, char * s1, char * s2, int n, double x);
    Classic(const Classic & c);
    Classic();
    ~Classic();
    virtual void Report() const;
    virtual Classic & operator=(const Classic & d);
};

Cd::Cd(char *s1, char * s2, int n, double x) {
    strncpy(performers, s1, 50);
    performers[49] = '\0';
    strncpy(label, s2, 20);
    label[19] = '\0';
    selections = n;
    playtime = x;
}


Cd::Cd(const Cd & d) {
    strncpy(performers, d.performers, 50);
    performers[49] = '\0';
    strncpy(label, d.label, 20);
    label[19] = '\0';
    selections = d.selections;
    playtime = d.playtime;
}

Cd::Cd() {
    performers[0] = '\0';
    label[0] = '\0';
    selections = 0;
    playtime = 0;
}

Cd::~Cd() {}

void Cd::Report() const {
    ios_base::fmtflags flag  = cout.setf(ios_base::fixed, ios_base::floatfield);
    streamsize pr = cout.precision(3);

    cout << "performer: " << performers << endl;
    cout << "label: " << label << endl;
    cout << "Selections: " << selections << endl;
    cout << "playtime: " << playtime << endl;

    cout.setf(flag, ios_base::floatfield);
    cout.precision(pr);
}

Cd & Cd::operator=(const Cd & d) {
    if (this == &d) {
        return *this;
    }

    strncpy(performers, d.performers, 50);
    performers[49] = '\0';
    strncpy(label, d.label, 20);
    label[19] = '\0';
    selections = d.selections;
    playtime = d.playtime;

    return *this;
}


Classic::Classic( char * s3, char *s1, char * s2, int n, double x): Cd(s1, s2, n, x) {
    strncpy(songs, s3, 50);
    songs[49] = '\0';
}


Classic::Classic(const Classic & d): Cd(d) {
    strncpy(songs, d.songs, 50);
    songs[49] = '\0';
}

Classic::Classic() {
    songs[0] = '\0';
}

Classic::~Classic() {}

void Classic::Report() const {
    Cd::Report();
    cout << "songs: " << songs << endl;
}

Classic & Classic::operator=(const Classic & d) {
    if (this == &d) {
        return *this;
    }

    Cd::operator=(d);
    strncpy(songs, d.songs, 50);
    songs[49] = '\0';
    return *this;
}


void Bravo(const Cd & disk);

int main() {
    Cd c1("Beatles", "Capitol", 14, 35.5);
    Classic c2 = Classic("Piano Sonata in B flat, Fantasia in C", "Alfred Brendel", "Philips", 2, 57.17);
    Cd *pcd = &c1;

    cout << "Using object directly:\n";
    c1.Report();
    c2.Report();

    cout << "Using type cd *pointer to objects:\n";
    pcd->Report();
    pcd = &c2;
    pcd->Report();

    cout << "Calling a function with a Cd referene argument:\n";
    Bravo(c1);
    Bravo(c2);

    cout << "Testing assigment: ";
    Classic copy;
    copy = c2;
    copy.Report();

    return 0;
}

void Bravo(const Cd & disk) {
    disk.Report();
}