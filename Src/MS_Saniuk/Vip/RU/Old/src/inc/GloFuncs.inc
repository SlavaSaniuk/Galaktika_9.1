//------------------------------------------------------------------------------
//                                                      (c) Корпорация ГАЛАКТИКА
//------------------------------------------------------------------------------
// Система       : ГАЛАКТИКА
// Версия        : 8.0
// Назначение    : Глобальные функции, переведенные с паскаля
// Ответсвенный  :
//------------------------------------------------------------------------------

#include KatDocName.vih
#include TiDkInfo.vih
#include ShowAnalytics.vih

#ifdef ComponentVersion
Global F_KatDoc::KatDocName, F_KatDoc::TiDkInfo, F_Common::ShowAnalytics;
#else
Global KatDocName, TiDkInfo, ShowAnalytics;
#end

