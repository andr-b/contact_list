#include <ContactList.h>
#include <QVBoxLayout>
#include <vector>
#include <QPushButton>

std::vector<std::string> contacts{"Contact One", "Contact Two", "Contact three",
                                    "Contact four", "Contact five", "Contact six"};
//Assume we have obtained this vector from ContactListProvider;
ContactList::ContactList(QWidget *parent)
    : QWidget(parent) {

  QVBoxLayout *vbox = new QVBoxLayout(this);
  vbox->setSpacing(1);

  std::vector<QPushButton *> buttons;
  for (const std::string &x : contacts)
  {
      buttons.push_back(new QPushButton(QString::fromStdString(x),
                                        this));
      buttons.back()->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
      QPixmap pixmap("icon.png"); // Picture source unknown, I use by default
      QIcon ButtonIcon(pixmap);
      buttons.back()->setIcon(ButtonIcon);
  }

  for (size_t i = 0; i < buttons.size(); ++i)
  {
      vbox->addWidget(buttons[i]);
  }

  setLayout(vbox);
}
