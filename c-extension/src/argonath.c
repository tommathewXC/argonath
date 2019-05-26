#define PY_SSIZE_T_CLEAN
#include <Python.h>

#include "../headers/utils.h"

static PyObject * systa( PyObject * self, PyObject * args ){
   char * command;
   int sts;
   if( !PyArg_ParseTuple( args, "s", &command ) ){
      return NULL;
   }
   sts = system( command );
   return PyLong_FromLong( sts );
}

static PyObject * addit( PyObject * self, PyObject * arguments){
    int a;
    int b;
   if( !PyArg_ParseTuple( arguments, "ii", &a, &b ) ){ return NULL; }
   a = __internalAdder( &a, &b );
   return PyLong_FromLong( a );

}

/**
 * @brief The methods table
 * 
 */
static PyMethodDef SpamMethods[] = {
    { "system",  systa, METH_VARARGS, "Execute a shell command."},
    { "addit",  addit, METH_VARARGS, "Add two values."},
    {NULL, NULL, 0, NULL}        /* Sentinel */
};

/**
 *  The module defition
 * 
 * name of module
 * documentation
 * size of per-interpreter state of the module, or -1 if the module keeps state in global variables. 
 */
static struct PyModuleDef argonathmodule = {
    PyModuleDef_HEAD_INIT, "argonathc", NULL, -1, SpamMethods
};

/**
 * @brief   Initialize the module
 * 
 * @return PyMODINIT_FUNC 
 */
PyMODINIT_FUNC PyInit_argonathc(void)
{
    return PyModule_Create(&argonathmodule);
}
