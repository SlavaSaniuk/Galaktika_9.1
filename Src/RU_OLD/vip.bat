@call sets.bat
@if exist debug.res del debug.res
rem %gal_exe%vip.exe vip.prj /b /r:%res% 
%atl_exe%vip.exe vip.prj /b /r:%res% 
if exist AtlantIs_1.res del AtlantIs_1.res
if exist AtlantIs_vsl.res del AtlantIs_vsl.res
if exist atlerror.log del atlerror.log
if exist btrv_drv.log del btrv_drv.log
if exist leakage.log del leakage.log
if exist Vip_Res.log del Vip_Res.log
