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

      // Huruf H
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

      // Huruf A
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

      // Huruf L
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

      // Huruf I
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

      glfwSwapBuffers(window);
      glfwPollEvents();
    }
    glfwDestroyWindow(window);
    glfwTerminate();
    exit(EXIT_SUCCESS);
}
