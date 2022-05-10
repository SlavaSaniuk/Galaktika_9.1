.form 'Test'
.nameinlist 'Тестовый отчет'
.ard
.var
  DDov     :string;
  NDov	   :string;
  FIO      :string;
  IOF      :string;
  Dolzh    :string;
.endvar
.begin
  RunInterface('MS_Shilin::GetPodpis', NDov, DDov, FIO, IOF, Dolzh);
end.
.Create view T
as select * from katmol;
.fields
  DDov
  NDov	
  FIO   
  IOF
  Dolzh
.endfields
^
^
^
^
^
.endform 
