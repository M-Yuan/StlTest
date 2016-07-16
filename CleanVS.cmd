@echo ==================================
@echo SET VisualStudio PATH
@echo ==================================
call "%VS110COMNTOOLS%\vsvars32.bat

@echo ==================================
@echo Clean VisualStudio Solution
@echo ==================================
devenv StlTest.sln /Clean Debug
devenv StlTest.sln /Clean Release
rmdir Debug /s /q
rmdir Release /s /q
del *.sdf
rmdir ipch /s /q

rmdir MultiMapTest01\Debug /s /q
rmdir MultiMapTest01\Release /s /q
rmdir MultiMapTest02\Debug /s /q
rmdir MultiMapTest02\Release /s /q
rmdir MultiMapTest03\Debug /s /q
rmdir MultiMapTest03\Release /s /q
rmdir MultiMapTest04\Debug /s /q
rmdir MultiMapTest04\Release /s /q
rmdir MultiMapTest05\Debug /s /q
rmdir MultiMapTest05\Release /s /q
rmdir StackTest01\Debug /s /q
rmdir StackTest01\DRelease /s /q
rmdir StackTest02\Debug /s /q
rmdir StackTest02\Release /s /q

PAUSE