program powerWIN;

uses SysUtils, Process;

begin
    ExecuteProcess('cmd','/c pswdgn -l 256 --all > password.txt');
end.












