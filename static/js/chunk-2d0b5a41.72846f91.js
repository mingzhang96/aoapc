(window["webpackJsonp"]=window["webpackJsonp"]||[]).push([["chunk-2d0b5a41"],{"1a83":function(t,a,e){"use strict";e.r(a);var l=function(){var t=this,a=t.$createElement,e=t._self._c||a;return e("el-table",{staticStyle:{width:"100%"},attrs:{data:t.tableData}},[e("el-table-column",{attrs:{prop:"date",label:"日期",width:"180"}}),t._v(" "),e("el-table-column",{attrs:{prop:"name",label:"姓名",width:"180"}}),t._v(" "),e("el-table-column",{attrs:{prop:"address",label:"地址"}})],1)},n=[],o=e("b775");function r(t){return Object(o["a"])({url:"getTableData",method:"get",params:t})}var c={data:function(){return{tableData:[]}},mounted:function(){var t=this;r().then((function(a){console.log("api tableData :",a),t.tableData=a.data}),(function(t){console.log("err :",t)})),this.req({url:"getTableData",data:{},method:"GET"}).then((function(a){console.log("tableData :",a),t.tableData=a.data}),(function(t){console.log("err :",t)}))},methods:{}},u=c,s=e("2877"),b=Object(s["a"])(u,l,n,!1,null,null,null);a["default"]=b.exports}}]);