#include <iostream>
#include <visp3/gui/vpDisplayX.h>
#include <visp3/detection/vpDetectorQRCode.h>
#include <visp3/io/vpImageIo.h>

int main()
{

  vpImage<unsigned char> image;
  vpImageIo::read(image, "/home/hung/Documents/code/test_qrCode/qrcode.png");
  // tao 1 GUI de show anh
  vpDisplayX d(image);
  // // Tao 1 con tro detector
  vpDetectorBase *detector = NULL;
  // Cai dat con tro detector lam nhiem vu detec QR-code
  detector = new vpDetectorQRCode();
    // Set title cho GUI
  vpDisplay::setTitle(image, "my-qrcode");
  // Hien anh ra GUI
  vpDisplay::display(image);
    vpDisplay::flush(image);
  vpDisplay::getClick(image);

  // Kiem tra xem co detect duoc ma QR khong
  // bool status = detector->detect(image);



  // delete detector;
  return 0;
}