// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #include "REcmaSpatialIndexVisitorAdapter.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
            
        // includes for base ecma wrapper classes
        
                  #include "REcmaSpatialIndexVisitor.h"
                 void REcmaSpatialIndexVisitorAdapter::initEcma(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RSpatialIndexVisitorAdapter*) 0)));
        protoCreated = true;
    }

    
        // primary base class RSpatialIndexVisitor:
        
            QScriptValue dpt = engine.defaultPrototype(
                qMetaTypeId<RSpatialIndexVisitor*>());

            if (dpt.isValid()) {
                proto->setPrototype(dpt);
            }
          
        /*
        
        */
    

    QScriptValue fun;

    // toString:
    REcmaHelper::registerFunction(&engine, proto, toString, "toString");
    

    // destroy:
    REcmaHelper::registerFunction(&engine, proto, destroy, "destroy");
    
        // conversion for base class RSpatialIndexVisitor
        REcmaHelper::registerFunction(&engine, proto, getRSpatialIndexVisitor, "getRSpatialIndexVisitor");
        

    // get class name
    REcmaHelper::registerFunction(&engine, proto, getClassName, "getClassName");
    

    // conversion to all base classes (multiple inheritance):
    REcmaHelper::registerFunction(&engine, proto, getBaseClasses, "getBaseClasses");
    

    // properties:
    

    // methods:
    
            REcmaHelper::registerFunction(&engine, proto, visitData, "visitData");
            
            REcmaHelper::registerFunction(&engine, proto, visitNode, "visitNode");
            
        engine.setDefaultPrototype(
            qMetaTypeId<RSpatialIndexVisitorAdapter*>(), *proto);

        
    

    QScriptValue ctor = engine.newFunction(createEcma, *proto, 2);
    
    // static methods:
    

    // static properties:
    

    // enum values:
    

    // enum conversions:
    
        
    // init class:
    engine.globalObject().setProperty("RSpatialIndexVisitorAdapter",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaSpatialIndexVisitorAdapter::createEcma(QScriptContext* context, QScriptEngine* engine) 
    
    {
    if (context->thisObject().strictlyEquals(
       engine->globalObject())) {
       return REcmaHelper::throwError(
       QString::fromLatin1("RSpatialIndexVisitorAdapter(): Did you forget to construct with 'new'?"),
           context);
    }

    QScriptValue result;
    
            // constructor without variants:
            
    if( context->argumentCount() ==
        0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ constructor:
    
            // non-copyable class:
            REcmaShellSpatialIndexVisitorAdapter
                    * cppResult =
                    new
                    REcmaShellSpatialIndexVisitorAdapter
                    ();
                
                    // TODO: triggers: Warning: QScriptEngine::newVariant(): changing class of non-QScriptObject not supported:
                    result = engine->newVariant(context->thisObject(), qVariantFromValue(cppResult));
                
        cppResult->__qtscript_self = result;
    
    } else 

    {
       return REcmaHelper::throwError(
       QString::fromLatin1("RSpatialIndexVisitorAdapter(): no matching constructor found."),
           context);
    }
    
    return result;
    }
    

    // conversion functions for base classes:
     QScriptValue REcmaSpatialIndexVisitorAdapter::getRSpatialIndexVisitor(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                RSpatialIndexVisitor* cppResult =
                    qscriptvalue_cast<RSpatialIndexVisitorAdapter*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
            

    // returns class name:
     QScriptValue REcmaSpatialIndexVisitorAdapter::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RSpatialIndexVisitorAdapter"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaSpatialIndexVisitorAdapter::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        
        list.append("RSpatialIndexVisitor");
    

        return qScriptValueFromSequence(engine, list);
    }
    

    // properties:
    

    // public methods:
     QScriptValue
        REcmaSpatialIndexVisitorAdapter::visitData
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            REcmaHelper::functionStart("REcmaSpatialIndexVisitorAdapter::visitData", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaSpatialIndexVisitorAdapter::visitData";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RSpatialIndexVisitorAdapter* self = 
                        getSelf("visitData", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    8 && (
            context->argument(0).isNumber()
        ) /* type: int */
     && (
            context->argument(1).isNumber()
        ) /* type: int */
     && (
            context->argument(2).isNumber()
        ) /* type: double */
     && (
            context->argument(3).isNumber()
        ) /* type: double */
     && (
            context->argument(4).isNumber()
        ) /* type: double */
     && (
            context->argument(5).isNumber()
        ) /* type: double */
     && (
            context->argument(6).isNumber()
        ) /* type: double */
     && (
            context->argument(7).isNumber()
        ) /* type: double */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    int
                    a0 =
                    (int)
                    
                    context->argument( 0 ).
                    toNumber();
                
                    // argument isStandardType
                    int
                    a1 =
                    (int)
                    
                    context->argument( 1 ).
                    toNumber();
                
                    // argument isStandardType
                    double
                    a2 =
                    (double)
                    
                    context->argument( 2 ).
                    toNumber();
                
                    // argument isStandardType
                    double
                    a3 =
                    (double)
                    
                    context->argument( 3 ).
                    toNumber();
                
                    // argument isStandardType
                    double
                    a4 =
                    (double)
                    
                    context->argument( 4 ).
                    toNumber();
                
                    // argument isStandardType
                    double
                    a5 =
                    (double)
                    
                    context->argument( 5 ).
                    toNumber();
                
                    // argument isStandardType
                    double
                    a6 =
                    (double)
                    
                    context->argument( 6 ).
                    toNumber();
                
                    // argument isStandardType
                    double
                    a7 =
                    (double)
                    
                    context->argument( 7 ).
                    toNumber();
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->visitData(a0
        ,
    a1
        ,
    a2
        ,
    a3
        ,
    a4
        ,
    a5
        ,
    a6
        ,
    a7);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RSpatialIndexVisitorAdapter.visitData().",
                   context);
            }
            REcmaHelper::functionEnd("REcmaSpatialIndexVisitorAdapter::visitData", context, engine);
            return result;
        }
         QScriptValue
        REcmaSpatialIndexVisitorAdapter::visitNode
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            REcmaHelper::functionStart("REcmaSpatialIndexVisitorAdapter::visitNode", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaSpatialIndexVisitorAdapter::visitNode";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RSpatialIndexVisitorAdapter* self = 
                        getSelf("visitNode", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    6 && (
            context->argument(0).isNumber()
        ) /* type: double */
     && (
            context->argument(1).isNumber()
        ) /* type: double */
     && (
            context->argument(2).isNumber()
        ) /* type: double */
     && (
            context->argument(3).isNumber()
        ) /* type: double */
     && (
            context->argument(4).isNumber()
        ) /* type: double */
     && (
            context->argument(5).isNumber()
        ) /* type: double */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    double
                    a0 =
                    (double)
                    
                    context->argument( 0 ).
                    toNumber();
                
                    // argument isStandardType
                    double
                    a1 =
                    (double)
                    
                    context->argument( 1 ).
                    toNumber();
                
                    // argument isStandardType
                    double
                    a2 =
                    (double)
                    
                    context->argument( 2 ).
                    toNumber();
                
                    // argument isStandardType
                    double
                    a3 =
                    (double)
                    
                    context->argument( 3 ).
                    toNumber();
                
                    // argument isStandardType
                    double
                    a4 =
                    (double)
                    
                    context->argument( 4 ).
                    toNumber();
                
                    // argument isStandardType
                    double
                    a5 =
                    (double)
                    
                    context->argument( 5 ).
                    toNumber();
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->visitNode(a0
        ,
    a1
        ,
    a2
        ,
    a3
        ,
    a4
        ,
    a5);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RSpatialIndexVisitorAdapter.visitNode().",
                   context);
            }
            REcmaHelper::functionEnd("REcmaSpatialIndexVisitorAdapter::visitNode", context, engine);
            return result;
        }
         QScriptValue REcmaSpatialIndexVisitorAdapter::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RSpatialIndexVisitorAdapter* self = getSelf("toString", context);
    
    QString result;
    
            result = QString("RSpatialIndexVisitorAdapter(0x%1)").arg((unsigned long int)self, 0, 16);
        
    return QScriptValue(result);
    }
     QScriptValue REcmaSpatialIndexVisitorAdapter::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RSpatialIndexVisitorAdapter* self = getSelf("RSpatialIndexVisitorAdapter", context);
        //Q_ASSERT(self!=NULL);
        if (self==NULL) {
            return REcmaHelper::throwError("self is NULL", context);
        }
        
    
        delete self;
        context->thisObject().setData(engine->nullValue());
        context->thisObject().prototype().setData(engine->nullValue());
        context->thisObject().setPrototype(engine->nullValue());
        context->thisObject().setScriptClass(NULL);
        return engine->undefinedValue();
    }
    RSpatialIndexVisitorAdapter* REcmaSpatialIndexVisitorAdapter::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RSpatialIndexVisitorAdapter* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RSpatialIndexVisitorAdapter >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RSpatialIndexVisitorAdapter.%1(): "
                        "This object is not a RSpatialIndexVisitorAdapter").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        REcmaShellSpatialIndexVisitorAdapter* REcmaSpatialIndexVisitorAdapter::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RSpatialIndexVisitorAdapter* selfBase = getSelf(fName, context);
                REcmaShellSpatialIndexVisitorAdapter* self = dynamic_cast<REcmaShellSpatialIndexVisitorAdapter*>(selfBase);
                //return REcmaHelper::scriptValueTo<REcmaShellSpatialIndexVisitorAdapter >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RSpatialIndexVisitorAdapter.%1(): "
                    "This object is not a RSpatialIndexVisitorAdapter").arg(fName),
                    context);
            }

            return self;
            


        }
        