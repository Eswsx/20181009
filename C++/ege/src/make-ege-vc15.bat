@echo off
call setenv

REM ע�⣬����ʹ�� /Rebuild����Ӧ��ʹ��/Build�����ʹ��ǰ�ߣ���Win32�Ŀ�ᱻVC�Զ�ɾ��

REM ����������������ȷ�����뻷��
REM VC�İ�װ·��
set VCPATH=%VC15PATH%
REM ege��vc��Ŀ��Ŀ¼
set PROJECT_DIR=vc2015
REM ege��vc��Ŀ������
set PROJECT_NAME=graphics15.sln

REM һ�������������ڼ�¼����ʱ��״̬
set CCMODE=
set FAILOR=
set SUCCESSOR=

REM ��ʼ����
set CCMODE=Release-Win32
"%VCPATH%\..\Common7\IDE\devenv.com" "%PROJECT_DIR%/%PROJECT_NAME%" /Build "Release|Win32"
if %ErrorLevel% == 0 (
	set SUCCESSOR=%SUCCESSOR%  %CCMODE%
) else (
    set FAILOR=%FAILOR%  %CCMODE%
)


set CCMODE=Release-x64
"%VCPATH%\..\Common7\IDE\devenv.com" "%PROJECT_DIR%/%PROJECT_NAME%" /Build "Release|x64"
if %ErrorLevel% == 0 (
	set SUCCESSOR=%SUCCESSOR%  %CCMODE%
) else (
    set FAILOR=%FAILOR%  %CCMODE%
)



echo.
echo ----------------------------------------------
echo ����%PROJECT_NAME%
echo ����ɹ�����Ŀ��: %SUCCESSOR%
echo ����ʧ�ܵ���Ŀ��: %FAILOR%
echo.
echo ----------------------------------------------
pause