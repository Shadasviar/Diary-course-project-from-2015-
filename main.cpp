#include "diary.h"
#include <QApplication>
#include <QTextCodec>
#include <QTranslator>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTranslator *qt_translator = new QTranslator;
    QString file_translate = QApplication::applicationDirPath () + "/by.qm";
        if ( !qt_translator->load(file_translate)) {
          delete qt_translator;
        }
        else{
            qApp->installTranslator( qt_translator );
        }
    //QTextCodec::setCodecForCStrings (QTextCodec::codecForName ("utf-8"));
    //QTextCodec::setCodecForTr (QTextCodec::codecForName ("utf-8"));
    QTextCodec::setCodecForLocale(QTextCodec::codecForName ("utf-8"));
    Diary w;
    w.show();

    return a.exec();
}
