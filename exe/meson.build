project('exe', 'cpp',
  version : '0.1',
  default_options : ['warning_level=3', 'cpp_std=c++11'])

cppdep = meson.get_compiler('cpp')
dldep = cppdep.find_library('dl')

executable('Test',
           'main.cpp',
           dependencies : dldep)
