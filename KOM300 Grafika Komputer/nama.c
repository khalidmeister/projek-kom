#include <GLFW/glfw3.h>
#include <stdlib.h>
#include <stdio.h>

static void error_callback(int error, const char* description) {
  fputs(description, stderr);
}
static void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods){
  if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS)
  glfwSetWindowShouldClose(window, GL_TRUE);
}

int main(void) {
    GLFWwindow* window;
    glfwSetErrorCallback(error_callback);
    if (!glfwInit())
    exit(EXIT_FAILURE);
    window = glfwCreateWindow(720, 720, "Irfan Alghani Khalid | G64170054", NULL, NULL);
    if (!window){
      glfwTerminate();
      exit(EXIT_FAILURE);
    }
    glfwMakeContextCurrent(window);
    glfwSwapInterval(1);
    glfwSetKeyCallback(window, key_callback);
    while (!glfwWindowShouldClose(window)){
      float ratio;
      int width, height;
      glfwGetFramebufferSize(window, &width, &height);
      ratio = width / (float) height;
      glViewport(0, 0, width, height);
      glClear(GL_COLOR_BUFFER_BIT);
      glMatrixMode(GL_PROJECTION);
      glLoadIdentity();
      glOrtho(0, 720, 720, 0, 1.f, -1.f);
      glMatrixMode(GL_MODELVIEW);
      glLoadIdentity();
      // Background dari Gambar
      glBegin(GL_POLYGON);
      glColor3ub(248,248,248);
      glVertex2d(0, 0);
      glColor3ub(248,248,248);
      glVertex2d(0, 720);
      glColor3ub(248,248,248);
      glVertex2d(720, 720);
      glColor3ub(248,248,248);
      glVertex2d(720, 0);
      glEnd();
      // Border Atas
      glBegin(GL_POLYGON);
      glColor3ub(247,190,22);
      glVertex2d(70, 300);
      glColor3ub(247,190,22);
      glVertex2d(70, 310);
      glColor3ub(247,190,22);
      glVertex2d(640, 310);
      glColor3ub(247,190,22);
      glVertex2d(640, 300);
      glEnd();
      // Border Bawah
      glBegin(GL_POLYGON);
      glColor3ub(247,190,22);
      glVertex2d(70, 430);
      glColor3ub(247,190,22);
      glVertex2d(70, 440);
      glColor3ub(247,190,22);
      glVertex2d(640, 440);
      glColor3ub(247,190,22);
      glVertex2d(640, 430);
      glEnd();

      // Bagian Aksesoris
      glBegin(GL_POLYGON);
      glColor3ub(41,52,98);
      glVertex2d(0, 637);
      glColor3ub(41,52,98);
      glVertex2d(0, 640);
      glColor3ub(41,52,98);
      glVertex2d(74, 640);
      glColor3ub(41,52,98);
      glVertex2d(74, 637);
      glEnd();

      glBegin(GL_POLYGON);
      glColor3ub(41,52,98);
      glVertex2d(0, 652);
      glColor3ub(41,52,98);
      glVertex2d(0, 655);
      glColor3ub(41,52,98);
      glVertex2d(110, 655);
      glColor3ub(41,52,98);
      glVertex2d(110, 652);
      glEnd();

      glBegin(GL_POLYGON);
      glColor3ub(41,52,98);
      glVertex2d(610, 637);
      glColor3ub(41,52,98);
      glVertex2d(610, 640);
      glColor3ub(41,52,98);
      glVertex2d(720, 640);
      glColor3ub(41,52,98);
      glVertex2d(720, 637);
      glEnd();

      glBegin(GL_POLYGON);
      glColor3ub(41,52,98);
      glVertex2d(646, 652);
      glColor3ub(41,52,98);
      glVertex2d(646, 655);
      glColor3ub(41,52,98);
      glVertex2d(720, 655);
      glColor3ub(41,52,98);
      glVertex2d(720, 652);
      glEnd();

      glLineWidth(4.0);
      glBegin(GL_LINES);
      glColor3ub(41,52,98);
      glVertex2d(75, 395);
      glColor3ub(41,52,98);
      glVertex2d(95, 415);
      glEnd();

      glLineWidth(4.0);
      glBegin(GL_LINES);
      glColor3ub(41,52,98);
      glVertex2d(95, 395);
      glColor3ub(41,52,98);
      glVertex2d(75, 415);
      glEnd();

      glLineWidth(4.0);
      glBegin(GL_LINES);
      glColor3ub(247,190,22);
      glVertex2d(75, 360);
      glColor3ub(247,190,22);
      glVertex2d(95, 380);
      glEnd();

      glLineWidth(4.0);
      glBegin(GL_LINES);
      glColor3ub(247,190,22);
      glVertex2d(95, 360);
      glColor3ub(247,190,22);
      glVertex2d(75, 380);
      glEnd();

      glLineWidth(4.0);
      glBegin(GL_LINES);
      glColor3ub(41,52,98);
      glVertex2d(75, 325);
      glColor3ub(41,52,98);
      glVertex2d(95, 345);
      glEnd();

      glLineWidth(4.0);
      glBegin(GL_LINES);
      glColor3ub(41,52,98);
      glVertex2d(95, 325);
      glColor3ub(41,52,98);
      glVertex2d(75, 345);
      glEnd();

      //Cross Tambahan
      glLineWidth(10.0);
      glBegin(GL_LINES);
      glColor3ub(247,190,22);
      glVertex2d(50, 120);
      glColor3ub(247,190,22);
      glVertex2d(125, 195);
      glEnd();

      glLineWidth(10.0);
      glBegin(GL_LINES);
      glColor3ub(247,190,22);
      glVertex2d(125, 120);
      glColor3ub(247,190,22);
      glVertex2d(50, 195);
      glEnd();

      // --------------------------------------------------- Sebelah Kanan ---------------------------------------
      glLineWidth(4.0);
      glBegin(GL_LINES);
      glColor3ub(41,52,98);
      glVertex2d(620, 395);
      glColor3ub(41,52,98);
      glVertex2d(640, 415);
      glEnd();

      glLineWidth(4.0);
      glBegin(GL_LINES);
      glColor3ub(41,52,98);
      glVertex2d(640, 395);
      glColor3ub(41,52,98);
      glVertex2d(620, 415);
      glEnd();

      glLineWidth(4.0);
      glBegin(GL_LINES);
      glColor3ub(247,190,22);
      glVertex2d(620, 360);
      glColor3ub(247,190,22);
      glVertex2d(640, 380);
      glEnd();

      glLineWidth(4.0);
      glBegin(GL_LINES);
      glColor3ub(247,190,22);
      glVertex2d(640, 360);
      glColor3ub(247,190,22);
      glVertex2d(620, 380);
      glEnd();

      glLineWidth(4.0);
      glBegin(GL_LINES);
      glColor3ub(41,52,98);
      glVertex2d(620, 325);
      glColor3ub(41,52,98);
      glVertex2d(640, 345);
      glEnd();

      glLineWidth(4.0);
      glBegin(GL_LINES);
      glColor3ub(41,52,98);
      glVertex2d(640, 325);
      glColor3ub(41,52,98);
      glVertex2d(620, 345);
      glEnd();
      // ------------------------- Full of Lingkaran!!!! --------------------------------------
      float theta;
      glBegin(GL_POLYGON);
      for(int i = 0; i < 360; i++){
        theta = i * 3.14 / 180;
        glVertex2d(545 + 35 * cos(theta), 175 + 35 * sin(theta));
      }
      glEnd();

      glBegin(GL_POLYGON);
      glColor3ub(247,190,22);
      for(int i = 0; i < 360; i++){
        theta = i * 3.14 / 180;
        glVertex2d(495 + 15 * cos(theta), 235 + 15 * sin(theta));
      }
      glEnd();

      glBegin(GL_POLYGON);
      glColor3ub(41,52,98);
      for(int i = 0; i < 360; i++){
        theta = i * 3.14 / 180;
        glVertex2d(110 + 30 * cos(theta), 545 + 30 * sin(theta));
      }
      glEnd();

      glBegin(GL_POLYGON);
      glColor3ub(247,190,22);
      for(int i = 0; i < 360; i++){
        theta = i * 3.14 / 180;
        glVertex2d(610 + 30 * cos(theta), 545 + 30 * sin(theta));
      }
      glEnd();


      // ------------------------------------------------------------------- Sesi Huruf ----------------------------------------------------
      // Huruf K
      // Sisi Tegak
      glBegin(GL_POLYGON);
      glColor3ub(41,52,98);
      glVertex2d(135, 340);
      glColor3ub(41,52,98);
      glVertex2d(135, 400);
      glColor3ub(41,52,98);
      glVertex2d(145, 400);
      glColor3ub(41,52,98);
      glVertex2d(145, 340);
      glEnd();

      // Sisi Datar
      glBegin(GL_POLYGON);
      glColor3ub(41,52,98);
      glVertex2d(135, 365);
      glColor3ub(41,52,98);
      glVertex2d(135, 375);
      glColor3ub(41,52,98);
      glVertex2d(165, 375);
      glColor3ub(41,52,98);
      glVertex2d(165, 365);
      glEnd();

      // Sisi Bengkok-Atas
      glBegin(GL_POLYGON);
      glColor3ub(41,52,98);
      glVertex2d(170, 340);
      glColor3ub(41,52,98);
      glVertex2d(155, 365);
      glColor3ub(41,52,98);
      glVertex2d(165, 365);
      glColor3ub(41,52,98);
      glVertex2d(180, 340);
      glEnd();

      // Sisi Bengkok-Bawah
      glBegin(GL_POLYGON);
      glColor3ub(41,52,98);
      glVertex2d(155, 375);
      glColor3ub(41,52,98);
      glVertex2d(170, 400);
      glColor3ub(41,52,98);
      glVertex2d(180, 400);
      glColor3ub(41,52,98);
      glVertex2d(165, 375);
      glEnd();

      // ------------------------------------------------------------- Huruf H ------------------------------------------
      // Sisi Tegak
      glBegin(GL_POLYGON);
      glColor3ub(41,52,98);
      glVertex2d(220, 340);
      glColor3ub(41,52,98);
      glVertex2d(220, 400);
      glColor3ub(41,52,98);
      glVertex2d(230, 400);
      glColor3ub(41,52,98);
      glVertex2d(230, 340);
      glEnd();
      glBegin(GL_POLYGON);
      glColor3ub(41,52,98);
      glVertex2d(260, 340);
      glColor3ub(41,52,98);
      glVertex2d(260, 400);
      glColor3ub(41,52,98);
      glVertex2d(270, 400);
      glColor3ub(41,52,98);
      glVertex2d(270, 340);
      glEnd();
      // Sisi Datar
      glBegin(GL_POLYGON);
      glColor3ub(41,52,98);
      glVertex2d(220, 365);
      glColor3ub(41,52,98);
      glVertex2d(220, 375);
      glColor3ub(41,52,98);
      glVertex2d(270, 375);
      glColor3ub(41,52,98);
      glVertex2d(270, 365);
      glEnd();

      // ---------------------------------------------------- Huruf A ------------------------------------
      // Main Triangle
      glBegin(GL_POLYGON);
      glColor3ub(41,52,98);
      glVertex2d(330, 340);
      glColor3ub(41,52,98);
      glVertex2d(310, 400);
      glColor3ub(41,52,98);
      glVertex2d(360, 400);
      glColor3ub(41,52,98);
      glVertex2d(340, 340);
      glEnd();

      // Trapesium bawah
      glBegin(GL_POLYGON);
      glColor3ub(248,248,248);
      glVertex2d(325, 390);
      glColor3ub(248,248,248);
      glVertex2d(320, 400);
      glColor3ub(248,248,248);
      glVertex2d(350, 400);
      glColor3ub(248,248,248);
      glVertex2d(345, 390);
      glEnd();

      // Segitiga Bayangan
      glBegin(GL_TRIANGLES);
      glColor3ub(248,248,248);
      glVertex2d(335, 350);
      glColor3ub(248,248,248);
      glVertex2d(325, 380);
      glColor3ub(248,248,248);
      glVertex2d(345, 380);
      glEnd();

      // --------------------------------------------- Huruf L ---------------------------------
      // Sisi Tegak
      glBegin(GL_POLYGON);
      glColor3ub(41,52,98);
      glVertex2d(403, 340);
      glColor3ub(41,52,98);
      glVertex2d(403, 400);
      glColor3ub(41,52,98);
      glVertex2d(413, 400);
      glColor3ub(41,52,98);
      glVertex2d(413, 340);
      glEnd();
      // Sisi Datar
      glBegin(GL_POLYGON);
      glColor3ub(41,52,98);
      glVertex2d(403, 390);
      glColor3ub(41,52,98);
      glVertex2d(403, 400);
      glColor3ub(41,52,98);
      glVertex2d(438, 400);
      glColor3ub(41,52,98);
      glVertex2d(438, 390);
      glEnd();

      // --------------------------------------------------- Huruf I -------------------------------
      // Sisi Tegak
      glBegin(GL_POLYGON);
      glColor3ub(41,52,98);
      glVertex2d(475, 340);
      glColor3ub(41,52,98);
      glVertex2d(475, 400);
      glColor3ub(41,52,98);
      glVertex2d(485, 400);
      glColor3ub(41,52,98);
      glVertex2d(485, 340);
      glEnd();

      // --------------------------------------------------- Huruf D -------------------------------
      // Lingkaran Doloe
      /*glBegin(GL_POLYGON);
      for(int i = 360; i < 540; i++){
        theta = i * 3.14 / 180;
        glVertex2d(560 + 30 * cos(theta), 370 + 30 * sin(theta));
      }
      glEnd();*/

      glfwSwapBuffers(window);
      glfwPollEvents();
    }
    glfwDestroyWindow(window);
    glfwTerminate();
    exit(EXIT_SUCCESS);
}
