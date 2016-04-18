// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #include "REcmaListWidget.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
            
        // includes for base ecma wrapper classes
         void REcmaListWidget::initEcma(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RListWidget*) 0)));
        protoCreated = true;
    }

    
        // primary base class QListWidget:
        
            QScriptValue dpt = engine.defaultPrototype(
                qMetaTypeId<QListWidget*>());

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
    
        // conversion for base class QListWidget
        REcmaHelper::registerFunction(&engine, proto, getQListWidget, "getQListWidget");
        

    // get class name
    REcmaHelper::registerFunction(&engine, proto, getClassName, "getClassName");
    

    // conversion to all base classes (multiple inheritance):
    REcmaHelper::registerFunction(&engine, proto, getBaseClasses, "getBaseClasses");
    

    // properties:
    

    // methods:
    
            REcmaHelper::registerFunction(&engine, proto, setIconOffset, "setIconOffset");
            
        engine.setDefaultPrototype(
            qMetaTypeId<RListWidget*>(), *proto);

        
                        qScriptRegisterMetaType<
                        RListWidget*>(
                        &engine, toScriptValue, fromScriptValue, *proto);
                    
    

    QScriptValue ctor = engine.newFunction(createEcma, *proto, 2);
    
    // static methods:
    

    // static properties:
    

    // enum values:
    

    // enum conversions:
    
        
    // init class:
    engine.globalObject().setProperty("RListWidget",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaListWidget::createEcma(QScriptContext* context, QScriptEngine* engine) 
    
    {
    if (context->thisObject().strictlyEquals(
       engine->globalObject())) {
       return REcmaHelper::throwError(
       QString::fromLatin1("RListWidget(): Did you forget to construct with 'new'?"),
           context);
    }

    QScriptValue result;
        
            // generate constructor variants:
            
    if( context->argumentCount() ==
        0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ constructor:
    
            // non-copyable class:
            REcmaShellListWidget
                    * cppResult =
                    new
                    REcmaShellListWidget
                    ();
                
                    result = engine->newQObject(context->thisObject(), cppResult, QScriptEngine::QtOwnership);
                
        cppResult->__qtscript_self = result;
    
    } else 

    if( context->argumentCount() ==
        1
                && (
                
                        context->argument(
                        0
                        ).isQObject()
                        ||
                    
                        context->argument(
                        0
                        ).isNull()
                ) /* type: QWidget * */
            
    ){
    // prepare arguments:
    
            // argument isQObject
            QWidget *
            a0 =
            qobject_cast<
            QWidget *>
            ( context->argument(
            0
            ).
            toQObject()
            );
        
    // end of arguments

    // call C++ constructor:
    
            // non-copyable class:
            REcmaShellListWidget
                    * cppResult =
                    new
                    REcmaShellListWidget
                    (
                    a0
                    );
                
                    result = engine->newQObject(context->thisObject(), cppResult, QScriptEngine::QtOwnership);
                
        cppResult->__qtscript_self = result;
    
    } else 

    {
       return REcmaHelper::throwError(
       QString::fromLatin1("RListWidget(): no matching constructor found."),
           context);
    }
    
    return result;
    }
    

    // conversion functions for base classes:
     QScriptValue REcmaListWidget::getQListWidget(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                QListWidget* cppResult =
                    qscriptvalue_cast<RListWidget*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
            

    // returns class name:
     QScriptValue REcmaListWidget::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RListWidget"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaListWidget::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        
        list.append("QListWidget");
    

        return qScriptValueFromSequence(engine, list);
    }
    

    // properties:
    

    // public methods:
     QScriptValue
        REcmaListWidget::setIconOffset
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            REcmaHelper::functionStart("REcmaListWidget::setIconOffset", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaListWidget::setIconOffset";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RListWidget* self = 
                        getSelf("setIconOffset", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isNumber()
        ) /* type: int */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    int
                    a0 =
                    (int)
                    
                    context->argument( 0 ).
                    toNumber();
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->setIconOffset(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RListWidget.setIconOffset().",
                   context);
            }
            REcmaHelper::functionEnd("REcmaListWidget::setIconOffset", context, engine);
            return result;
        }
         QScriptValue REcmaListWidget::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RListWidget* self = getSelf("toString", context);
    
    QString result;
    
            result = QString("RListWidget(0x%1)").arg((unsigned long int)self, 0, 16);
        
    return QScriptValue(result);
    }
     QScriptValue REcmaListWidget::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RListWidget* self = getSelf("RListWidget", context);
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
    RListWidget* REcmaListWidget::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RListWidget* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RListWidget >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RListWidget.%1(): "
                        "This object is not a RListWidget").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        REcmaShellListWidget* REcmaListWidget::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RListWidget* selfBase = getSelf(fName, context);
                REcmaShellListWidget* self = dynamic_cast<REcmaShellListWidget*>(selfBase);
                //return REcmaHelper::scriptValueTo<REcmaShellListWidget >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RListWidget.%1(): "
                    "This object is not a RListWidget").arg(fName),
                    context);
            }

            return self;
            


        }
         void fromScriptValue(const QScriptValue& value,
        RListWidget*
        &out) {
            QObject* o = value.toQObject();
            out = qobject_cast<
            RListWidget*>(o);
        }
     QScriptValue toScriptValue(QScriptEngine *engine,
        RListWidget*
        const &in){
            QScriptValue s = engine->newQObject(in, QScriptEngine::QtOwnership,
            QScriptEngine::PreferExistingWrapperObject);
            /*
            if(s.isNull()){
               REcmaHelper::throwError("This object is null.", engine->currentContext());
            }
            */
            return s;
        }
    